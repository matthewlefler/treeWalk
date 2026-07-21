# python file to parse the vk.xml file
# and create the {output_c_filename} c file
import xml.etree.ElementTree as ET
from collections.abc import Callable
from functools import partial

xml_filename = "vk.xml"
output_c_filename = "vulkan_xml.c"

def walk_tree(func: Callable[[ET.Element[str]], None], tree: ET.Element[str]) -> None:
    for element in tree:
        func(element)
        walk_tree(func, element)

def collect_all(func: Callable[[ET.Element[str]], bool], tree: ET.Element[str]) -> list[ET.Element[str]]:
    return collect_all_recurse(func, tree, [])

def collect_all_recurse(func: Callable[[ET.Element[str]], bool], tree: ET.Element[str], return_list: list[ET.Element[str]]) -> list[ET.Element[str]]:
    for element in tree:
        if func(element):
            return_list.append(element)
        collect_all_recurse(func, element, return_list)

    return return_list

def struct_extends(element: ET.Element[str], extends_from: str) -> bool:
    extends = element.get("structextends", "")
    if len(extends) <= 0:
        return False
    
    extends = extends.split(",")
    if extends_from in extends:
        return True
    else:
        return False
    
def extends(element: ET.Element[str], extends_from: str) -> bool:
    extends = element.get("extends", "")
    if len(extends) <= 0:
        return False
    
    extends = extends.split(",")
    if extends_from in extends:
        return True
    
    return False

def debug_print_tree(element: ET.Element[str], last: list[bool] = [], level: int = 0) -> None:
    # │ ├ └ ─
    last_len = len(last)
    for index,boolean in enumerate(last):
        if(index == last_len-1):
            if boolean == True:
                print("└───", end="")
            else:
                print("├───", end="")
        else:
            if boolean == True:
                print("    ", end="")
            else:
                print("│   ", end="")

    print(f"{element.tag}\t: {element.text}\t| {element.attrib}")

    sub_element_len = len(element)
    for index,sub_element in enumerate(element):
        if sub_element_len-1 == index:
            debug_print_tree(sub_element, last + [True], level + 1)
        else:
            debug_print_tree(sub_element, last + [False], level + 1)

comparator_dict = {
    "VkBool32" : ">=",
    "uint32_t" : ">=",
    "VkStructureType" : "==",
}

if __name__ == "__main__":
    with open(xml_filename, "r") as xml_file:
        with open(output_c_filename, "w") as output_c_file:
            tree = ET.parse(xml_file).getroot()
            # debug_print_tree(tree)

            vkstructuretypes = collect_all(partial(struct_extends, extends_from="VkPhysicalDeviceFeatures2"), tree)
            vkenumtypes = collect_all(partial(extends, extends_from="VkStructureType"), tree)
            vkstypenames = []

            for element in vkstructuretypes:
                for member in element:
                    for sub_element in member:
                        if sub_element.text == "sType":
                            vkstypenames.append(member.get("values", "NOT_FOUND"))

            # file header
            output_c_file.writelines([
                "#include <vulkan/vulkan.h>\n"
                "\n"
            ])

            output_c_file.writelines([
                "void* copy_structure(void* structure) {\n",
                "    void* return_struct = NULL;\n"
                "    switch(*(VkStructureType*) structure) {\n",
            ])           
            
            vkstructuretypes_len = len(vkstructuretypes)
            i = 0
            while i < vkstructuretypes_len:
                struct_type = vkstructuretypes[i].get("name", "NOT_FOUND")
                sType = vkstypenames[i]
                
                protector = None
                for enum in vkenumtypes:
                    if(enum.get("name") == sType):
                        protector = enum.get("protect")
                
                if(protector != None):
                    output_c_file.writelines([
                        f"#ifdef {protector}\n",
                    ])

                output_c_file.writelines([
                    f"        case {struct_type}:\n",
                    f"            return_struct = malloc(sizeof({struct_type}));\n",
                ])

                if(protector != None):
                    output_c_file.writelines([
                        f"#endif\n",
                    ])
                i += 1

            output_c_file.writelines([
                "    }\n",
                "    *((VkStructureType*) return_struct) = *((VkStructureType*) structure);\n"
                "    return return_struct;\n"
                "}\n",
            ])

            output_c_file.write("\n")

# comparision functions
            i = 0
            while i < vkstructuretypes_len:
                struct_type = vkstructuretypes[i].get("name", "NOT_FOUND")
                sType = vkstypenames[i]
                
                protector = None
                for enum in vkenumtypes:
                    if(enum.get("name") == sType):
                        protector = enum.get("protect")
                
                if(protector != None):
                    output_c_file.writelines([
                        f"#ifdef {protector}\n",
                    ])

                output_c_file.writelines([
                    f"bool compare_{struct_type}({struct_type} a, {struct_type} b)",
                    " {\n",
                ])

                output_c_file.write("    if (\n")

                first = True
                for element in vkstructuretypes[i]:
                    if element.tag == "member":
                        element_type = None
                        name = None
                        for sub in element:
                            if sub.tag == "type":
                                element_type = sub.text
                            if sub.tag == "name":
                                name = sub.text
                        
                        if element_type is None or name is None:
                            continue
                        if name == "pNext" or name == "sType": # skip redundant or useless checks
                            continue

                        if not first:
                            output_c_file.write(" &&\n")
                        first = False

                        comparator = comparator_dict.get(element_type)
                        if comparator is None:
                            print(f"ERROR, comparator for type {element_type} not found")
                        
                        output_c_file.writelines([
                            f"        a.{name}",
                            f" {comparator} "    # comparator
                            f"b.{name}"
                        ])
                
                output_c_file.writelines([
                    "\n    ) {\n",
                    "        return true\n",
                    "    }\n",
                    "    return false\n",
                    "}\n"
                ])

                if(protector != None):
                    output_c_file.writelines([
                        f"#endif\n",
                    ])
                i += 1
            
# compare arbitrary structure:
            output_c_file.write("\n")

            output_c_file.writelines([
                "bool compare_structure(void* a, void* b) {\n",
                "    switch(*(VkStructureType*) a) {\n",
            ])           
            
            vkstructuretypes_len = len(vkstructuretypes)
            i = 0
            while i < vkstructuretypes_len:
                struct_type = vkstructuretypes[i].get("name", "NOT_FOUND")
                sType = vkstypenames[i]
                
                protector = None
                for enum in vkenumtypes:
                    if(enum.get("name") == sType):
                        protector = enum.get("protect")
                
                if(protector != None):
                    output_c_file.writelines([
                        f"#ifdef {protector}\n",
                    ])

                output_c_file.writelines([
                    f"        case {struct_type}:\n",
                    f"            return compare_{struct_type}(a, b)\n",
                ])

                if(protector != None):
                    output_c_file.writelines([
                        f"#endif\n",
                    ])
                i += 1

            output_c_file.writelines([
                "    }\n",
                "    return false;\n"
                "}\n",
            ])

            output_c_file.write("\n")

