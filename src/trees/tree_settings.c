#define _DEFAULT_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <dirent.h>
#include <stdint.h>

#ifndef _DIRENT_HAVE_D_TYPE 
#include <sys/stat.h>
#endif

#include "../cJSON/cJSON.h"

#include "tree_settings.h"

/**
 * meant to have a static lifetime and be pinned in place (addr doesn't move)
 */
TreeSettings* tree_settings_array;
size_t tree_settings_array_len;

/**
 * @param name the name of the tree settings to get
 * 
 * @return a pointer to the settings, valid until free_tree_settings() is called
 *         or a null pointer, (void*) 0, if the named settings cannot be found
 */
TreeSettings* get_setting(char* name) {
    for(size_t i = 0; i < tree_settings_array_len; ++i) {
        if(strcmp(name, tree_settings_array[i].name) == 0) {
            return tree_settings_array + i;
        }
    }
    return nullptr;
}

/**
 * indexes directly into the underlying array of TreeSettings and of note, does not do any bounds checking
 * 
 * @param index the index of the tree settings to get
 *
 * @return a pointer to the settings, valid until free_tree_settings() is called (or a garbage pointer or segfaults)
 * 
 */
TreeSettings* get_setting_index(size_t index) {
    return tree_settings_array + index;
}

/**
 * loads a JSON settings file from a file path
 * 
 * @param path The absolute path to the file i.e. (/home/user/gitrepo/data/trees/test.json)
 */
 int load_setting(char* path, TreeSettings* tree_settings) {
    FILE* file = fopen(path, "r");

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    rewind(file);

    char* buffer = malloc(size + 1);
    fread(buffer, 1, size, file);
    buffer[size] = '\0';

    cJSON* json = cJSON_Parse(buffer);
    free(buffer);

    /*
     * example tree settings
     * {
     *      "name": "example",
     * 
     *      "grow_distance": 1.0,
     *      "nodes_per_growth": 3,
     *      "angle_between_nodes": 2.39982772149
     * 
     *      "gravity_tropism": 1.0,
     *      "horizontal_when_shaded_tropism": 1.0,
     *      "to_light_tropism": 1.0,
     *      "random_tropism": 1.0,
     *      "twist_tropism": 1.0
     * }
    */
    cJSON* name = cJSON_GetObjectItemCaseSensitive(json, "name");

    cJSON* grow_distance = cJSON_GetObjectItemCaseSensitive(json, "grow_distance");
    cJSON* nodes_per_growth = cJSON_GetObjectItemCaseSensitive(json, "nodes_per_growth");
    cJSON* angle_between_nodes = cJSON_GetObjectItemCaseSensitive(json, "angle_between_nodes");

    // tropisms
    cJSON* gravity_tropism = cJSON_GetObjectItemCaseSensitive(json, "gravity_tropism");
    cJSON* horizontal_when_shaded_tropism = cJSON_GetObjectItemCaseSensitive(json, "horizontal_when_shaded_tropism");
    cJSON* to_light_tropism = cJSON_GetObjectItemCaseSensitive(json, "to_light_tropism");
    cJSON* random_tropism = cJSON_GetObjectItemCaseSensitive(json, "random_tropism");
    cJSON* twist_tropism = cJSON_GetObjectItemCaseSensitive(json, "twist_tropism");


    if(cJSON_IsString(name)) { tree_settings->name = malloc(strlen(name->valuestring) + 1); strcpy(tree_settings->name, name->valuestring); } else { return 0; }
    if(cJSON_IsNumber(grow_distance))       { tree_settings->grow_distance       = grow_distance->valuedouble; }       else { return 0; }
    if(cJSON_IsNumber(nodes_per_growth))    { tree_settings->nodes_per_growth    = nodes_per_growth->valueint; }       else { return 0; }
    if(cJSON_IsNumber(angle_between_nodes)) { tree_settings->angle_between_nodes = angle_between_nodes->valuedouble; } else { return 0; }

    if(cJSON_IsNumber(gravity_tropism))                { tree_settings->gravity_tropism                = gravity_tropism->valuedouble; }                else { return 0; }
    if(cJSON_IsNumber(horizontal_when_shaded_tropism)) { tree_settings->horizontal_when_shaded_tropism = horizontal_when_shaded_tropism->valuedouble; } else { return 0; }
    if(cJSON_IsNumber(to_light_tropism))               { tree_settings->to_light_tropism               = to_light_tropism->valuedouble; }               else { return 0; }
    if(cJSON_IsNumber(random_tropism))                 { tree_settings->random_tropism                 = random_tropism->valuedouble; }                 else { return 0; }
    if(cJSON_IsNumber(twist_tropism))                  { tree_settings->twist_tropism                  = twist_tropism->valuedouble; }                  else { return 0; }

    cJSON_Delete(json);

    return 1;
}

void load_settings(char* dir) {
    struct dirent *de;  // Pointer for directory entry
    DIR *dr = opendir(dir); // Open current directory

    if (dr == NULL) {
        printf("Could not open tree settings directory:\n\t%s\n", dir);
        return;
    }

    tree_settings_array = NULL;
    tree_settings_array_len = 0;

    printf("loading tree settings\n");
    while ((de = readdir(dr)) != NULL) {

        char* path = malloc(strlen(dir) + strlen(de->d_name) + 1);
        stpcpy(path, dir);
        strcat(path, de->d_name);

#ifdef _DIRENT_HAVE_D_TYPE
        // if the file is a regular file
        if(de->d_type == DT_REG) {
#else
        // _DIRENT_HAVE_D_TYPE is not garueenteed so fall back on lstat then
        struct stat info; 
        lstat(path, &info);
        // if the file is a regular file
        if(S_ISREG(info.st_mode)) {
#endif        
            TreeSettings setting;
            
            if(load_setting(path, &setting)) {
                tree_settings_array = realloc(tree_settings_array, (tree_settings_array_len + 1) * sizeof(TreeSettings));
                tree_settings_array[tree_settings_array_len] = setting;
                ++tree_settings_array_len;
                printf("loaded:          %s\n", de->d_name);
                printf("\tname:                              %s\n", setting.name);
                printf("\tgrow_distance:                     %f\n", setting.grow_distance);
                printf("\tnodes_per_growth:                  %d\n", setting.nodes_per_growth);
                printf("\tangle_between_nodes:               %f\n", setting.angle_between_nodes);
                printf("\tgravity_tropism:                   %f\n", setting.gravity_tropism);
                printf("\thorizontal_when_shaded_tropism:    %f\n", setting.horizontal_when_shaded_tropism);
                printf("\tto_light_tropism:                  %f\n", setting.to_light_tropism);
                printf("\trandom_tropism:                    %f\n", setting.random_tropism);
                printf("\ttwist_tropism:                     %f\n", setting.twist_tropism);
            } else {
                printf("unable to parse: %s\n", de->d_name);
            }

        } else {
            printf("not loaded:      %s\n", de->d_name);
        }

        free(path);
    }
    printf("done\n");

    closedir(dr); 
}

/**
 * frees the array
 */
void free_tree_settings() {
    for(size_t i = 0; i < tree_settings_array_len; ++i) {
        free(tree_settings_array[i].name);
    }

    free(tree_settings_array);
}
