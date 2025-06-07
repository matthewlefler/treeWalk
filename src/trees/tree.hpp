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
            unsigned int seed;
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

            Tree(unsigned int seed, float min_growth_rate, float max_growth_rate, float bud_grow_chance, int number_of_side_nodes_per_branch, float min_distance_between_nodes, int max_end_nodes) {
                root = new Node();

                this->seed = seed;

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
                node.position += Vector3::Vec3FromRollPitch(node.roll, node.pitch);

                calculateNewWeights(node);
            }

            void createEndNodes(Node node) 
            {
                for (int i = 0; i < max_end_nodes; i++)
                {
                    // if the bud/node not successful in surviving the winter skip it
                    if(rand_r(&seed) > 10) {
                        continue;
                    }

                    Node* child = createNode(&node, 1.0f, node.roll, node.pitch);
                    node.children->push_back(child);
                }                
            }

            void calculateNewWeights(Node start_node) {
                // update all nodes in this node's path to root
                // get the change in "weight"
                // and add the change each of the nodes in the path's current weight
                //      node weight += change in weight

                float current_weight = getNodeWeight(&start_node);
                float change_in_weight = current_weight - start_node.weight;
                
                Node current_node = start_node;
                while (true)
                {
                    current_node.weight += change_in_weight;
                    
                    // if the current_node is the root node, break
                    if(current_node.parent == nullptr)
                    {
                        break;
                    }

                    current_node = *current_node.parent;
                }
            }

            void applyGravity(Node node) 
            {

                // recalc the rotation params

                
                // recalc poitions at some point
            }

            void prune(Node node) 
            {
                // prune
            }

    };
} // namespace Tree
