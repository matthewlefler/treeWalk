#ifndef TREE_SETTINGS_H
#define TREE_SETTINGS_H

#include <stddef.h>

typedef struct StructTreeSettings {
    float grow_distance;

    float angle_between_nodes;
    int nodes_per_growth;

    char* name;
} TreeSettings;

/**
 * @param name the name of the tree settings to get
 * 
 * @return a pointer to the settings, valid until free_settings() is called
 *         or a null pointer, (void*) 0, if the named settings cannot be found
 */
TreeSettings* get_setting(char* name);

/**
 * indexes directly into the underlying array of TreeSettings and of note, does not do any bounds checking
 * 
 * @param index the index of the tree settings to get
 *
 * @return a pointer to the settings, valid until free_settings() is called
 */
TreeSettings* get_setting_by_index(size_t index);

void load_settings(char* dir);

void free_settings();

#endif