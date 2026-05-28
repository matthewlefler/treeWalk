
#ifndef TREE_SETTINGS_C
#define TREE_SETTINGS_C

#define _DEFAULT_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <dirent.h>

#ifndef _DIRENT_HAVE_D_TYPE 
#include <sys/stat.h>
#endif


#include "../cJSON/cJSON.h"

#include "tree_settings.h"

/**
 * meant to have a static lifetime
 */
TreeSettings* tree_settings_array;
size_t tree_settings_array_len;

/**
 * @param name the name of the tree settings to get
 * 
 * @return a pointer to the settings, valid until free_settings() is called
 *         or a null pointer, (void*) 0, if the named settings cannot be found
 */
TreeSettings* get_setting(char* name) {
    for(size_t i = 0; i < tree_settings_array_len; ++i) {
        if(strcmp(name, tree_settings_array[i].name) == true) {
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
 * @return a pointer to the settings, valid until free_settings() is called (or a garbage pointer or segfaults)
 * 
 */
TreeSettings* get_setting_index(size_t index) {
    tree_settings_array[index];
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
     *     "name": "example",
     * 
     *     "grow_distance": 1.0,
     *     "nodes_per_growth": 3,
     *     "angle_between_nodes": 2.39982772149
     * }
    */
    cJSON* name = cJSON_GetObjectItemCaseSensitive(json, "name");

    cJSON* grow_distance = cJSON_GetObjectItemCaseSensitive(json, "grow_distance");
    cJSON* nodes_per_growth = cJSON_GetObjectItemCaseSensitive(json, "nodes_per_growth");
    cJSON* angle_between_nodes = cJSON_GetObjectItemCaseSensitive(json, "angle_between_nodes");

    if(cJSON_IsString(name)) {
        tree_settings->name = malloc(strlen(name->valuestring) + 1);
        strcpy(tree_settings->name, name->valuestring);
    } else {
        return 0;
    }
    if(cJSON_IsNumber(grow_distance)) {
        tree_settings->grow_distance = grow_distance->valuedouble;
    } else {
        return 0;
    }
    if(cJSON_IsNumber(nodes_per_growth)) {
        tree_settings->nodes_per_growth = grow_distance->valueint;
    } else {
        return 0;
    }
    if(cJSON_IsNumber(angle_between_nodes)) {
        tree_settings->angle_between_nodes = grow_distance->valuedouble;
    } else {
        return 0;
    }

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

    tree_settings_array = malloc(0);
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
            int did_parse = load_setting(path, &setting);
            
            if(did_parse) {
                tree_settings_array = realloc(tree_settings_array, (tree_settings_array_len + 1) * sizeof(TreeSettings));
                tree_settings_array[tree_settings_array_len] = setting;
                ++tree_settings_array_len;
                printf("loaded:          %s\n", de->d_name);
                printf("\tname:                %s\n", setting.name);
                printf("\tangle_between_nodes: %f\n", setting.angle_between_nodes);
                printf("\tgrow_distance:       %f\n", setting.grow_distance);
                printf("\tnodes_per_growth:    %d\n", setting.nodes_per_growth);
            } else {
                printf("unable to parse: %s\n", de->d_name);
            }

        } else {
            printf("not loaded:      %s\n", de->d_name);
        }
    }
    printf("done\n");

    closedir(dr); 
}

/**
 * frees the array
 */
void free_settings() {
    free(tree_settings_array);
}

#endif