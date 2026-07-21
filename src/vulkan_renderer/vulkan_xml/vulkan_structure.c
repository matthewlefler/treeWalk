#include <vulkan/vulkan.h>

#include "vulkan_xml.h"

void set_pNext(void* structure, void* addr) {
    *((VkStructureType*) structure) + 1 = addr;
}

void* get_pNext(void* structure) {
    return (((VkStructureType*) structure) + 1);
}

void* copy_struct_chain(void* start) {
    void* current_copied_struct = NULL;
    void* previous_copied_struct = copy_structure(start);
    void* current_struct = get_pNext(start);

    void* return_struct = previous_copied_struct;
    
    // walk the structure chain,
    while(current_struct != NULL) {
        current_copied_struct = copy_structure(current_struct);
        set_pNext(previous_copied_struct, current_copied_struct);

        current_struct = get_pNext(current_struct);
        previous_copied_struct = current_copied_struct;
    }

    return return_struct;
}

void free_struct_chain(void* start) {
    void* current = start;
    void* prev = NULL;

    while(current != NULL) {
        prev = current;
        current = get_pNext(current);

        free(prev);
    }
}

bool compare_struct_chain(void* a, void* b) {
    void* current_a = a;
    void* current_b = b;
    
    // walk the structure chain,
    while(current_a != NULL && current_b != NULL) {
        if(!compare_structure(current_a, current_b)) {
            return false;
        }

        current_a = get_pNext(current_a);
        current_b = get_pNext(current_b);

        if( // one structure chain is done while the other is not
            (current_a == NULL && current_b != NULL) ||
            (current_a != NULL && current_b == NULL)
        ) {
            return false;
        }
    }

    return true;
}