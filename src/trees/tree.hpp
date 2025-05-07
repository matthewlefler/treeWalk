////////////////
/// std libs ///
////////////////
#include <vector>

//////////////////
/// user files ///
//////////////////
#include "node.hpp"

/// @author Matthew Lefler
/// @date 05-03-2025
/// @version 0.1
namespace Tree
{
    class Tree
    {
        private:
            int seed;
            Node* root;

            // growth rates are multiplied by the amount of light that that branch gets
            float min_growth_rate; // minimum growth rate of a node
            float max_growth_rate; // maximum growth rate of a node

            float bud_grow_chance; // chance of a bud growing

            // the number of nodes per branch each grow cycle
            int number_of_side_nodes_per_branch; 
            // the minimum distance between two side nodes on the same branch
            float min_distance_between_nodes; 

            // the maximum number of nodes created at the end of a growth cycle at the end of a branch
            int max_end_nodes;

            // these are the nodes at the end of the branches
            std::vector<Node> leaf_nodes;


        public:

            Tree(int seed, float min_growth_rate, float max_growth_rate, float bud_grow_chance, int number_of_side_nodes_per_branch, float min_distance_between_nodes, int max_end_nodes) {
                root = new Node();

                this->seed = seed;
                // seed the random number generator
                // should only do this once
                srand(this->seed);


                this->max_end_nodes = max_end_nodes;

            }

            void tick() {
                // update
                // grow, apply gravity
                for(Node node : leaf_nodes)
                {
                    grow(node);
                    applyGravity(node);
                    prune(node);
                }
            }
        
        private:
            void grow(Node node)
            {
                // grow
                node.position;
            }

            void createEndNodes(Node node) 
            {
                for (int i = 0; i < max_end_nodes; i++)
                {
                    Node* child = createNode(&node, 1.0f, node.roll, node.pitch);
                    node.children->push_back(child);
                }
                
                
            }

            void applyGravity(Node node) 
            {
                // update
            }

            void prune(Node node) 
            {
                // prune
            }

    };
} // namespace Tree
