#ifndef MAIN_C
#define MAIN_C

#include <stdio.h>
#include <stdlib.h>

#include "trees/tree.h"
#include "trees/display.h"

#include "render/render.h"

int main(int argc, char** argv)
{

    // load_settings("data/trees/");    
    // Tree tree = new_tree_from_name("test", 0x1ABC123115812754);

    // size_t num = 5;
    // Tree trees[num];
    // for(size_t i = 0; i < num; ++i) {
    //     trees[i] = copy_tree(&tree);
    //     trees[i].transform.translation.x = i * i;
    //     update_tree(&tree);

    //     printf("gen tree iter: %d\n", i);

    //     printf("\tleaf list len: %d\n", trees[i].leaves_len);
    //     for(size_t j = 0; j < trees[i].meristems_len; ++j) {\
    //         Meristem l1 = trees[i].meristems[j];
    //         for(size_t k = 0; k < trees[i].meristems_len; ++k) {
    //             if(k == j) {continue;}
    //             Meristem l2 = trees[i].meristems[k];
    //             if(
    //                 l1.transform.translation.x == l2.transform.translation.x &&
    //                 l1.transform.translation.y == l2.transform.translation.y &&
    //                 l1.transform.translation.z == l2.transform.translation.z &&
    //                 l1.transform.rotation.x == l2.transform.rotation.x &&
    //                 l1.transform.rotation.y == l2.transform.rotation.y &&
    //                 l1.transform.rotation.z == l2.transform.rotation.z &&
    //                 l1.transform.rotation.w == l2.transform.rotation.w
    //             ) {
    //                 printf("found duplicate meristem %d, and %d\n", j, k);
    //             }
    //         }
    //     }
    //     fflush(stdout);
    // }

    init();
    run();

    return EXIT_SUCCESS;
}

#endif