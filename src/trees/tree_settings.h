#ifndef TREE_SETTINGS_H
#define TREE_SETTINGS_H

#include <stddef.h>

typedef struct StructTreeSettings {
    float grow_distance;

    float angle_between_nodes;
    uint32_t nodes_per_growth;

    char* name;

    // tropisms
    float gravity_tropism;                // want to move against gravity (towards up)
    float horizontal_when_shaded_tropism; // want to move horizontal when shaded
    float to_light_tropism;               // want to move towards the blue light of the sky
    float random_tropism;                 // want to move in a random direction
    float twist_tropism;                  // want to twist around the grow axis
} TreeSettings;

/**
 * @param name the name of the tree settings to get
 * 
 * @return a pointer to the settings, valid until free_tree_settings() is called
 *         or a null pointer, (void*) 0, if the named settings cannot be found
 */
TreeSettings* get_setting(char* name);

/**
 * indexes directly into the underlying array of TreeSettings and of note, does not do any bounds checking
 * 
 * @param index the index of the tree settings to get
 *
 * @return a pointer to the settings, valid until free_tree_settings() is called
 */
TreeSettings* get_setting_by_index(size_t index);

/**
 * loads all tree settings files from a directory
 * 
 * @param dir The directory to seach in, i.e. "/path/to/dir/", note the trailing /
 */
void load_settings(char* dir);

/**
 * frees the array
 */
void free_tree_settings();

#endif