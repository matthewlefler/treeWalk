//////////////
// std libs //
//////////////
#include <vector>
#include <math.h>

////////////////
// user files //
////////////////
#include "../utils/vector.hpp"

/// @author Matthew Lefler
/// @date 05-03-2025
/// @version 0.1
namespace Tree
{
    /// @brief a node of a tree structure with a variable number of children branches
    /// @details a node is a branch in the tree. 
    /// it has a parent branch and some number of children branches. 
    /// it has some weight, 
    /// a diameter equal to the (sum of the child children's diameter to the power of A) to the power of 1/A, d = (d1^A + d2^A + ... + dn^A)^(1/A)
    /// some length
    struct Node
    {
        Node* parent; // node that we came from to get to this node
        std::vector<Node*>* children; // pointer to variable length node array

        float total_weight; // weight of all the children nodes
        float weight; // weight of this node (length * radius)
        float radius; // radius of node (diameter / 2)
        float length; // length of node

        float roll; // angle in radians
        float pitch; // angle in radians

        utils::Vector3 position;
    };
    
    /// @brief Gets the approximate weight of a node
    /// @param node the node to get the weight of
    /// @return The approximate weight of the node
    /// @details the approximate weight of a node is calculated by getting the circle at the node and multiplying by length of the node
    float getNodeWeight(Node* node) {
        return M_PI * node->radius * node->radius * node->length; 
        // there might be a better way to square the radius float value
    }

    /// @brief creates and returns a new node
    /// @param parent the node that is "creating" this node
    /// @param initial_radius the initial radius of the node
    /// @param roll the roll of this node, a rotation around its local y axis
    /// @param pitch the pitch of the new node, a rotation around its local z axis
    /// @return a new allocated node
    Node* createNode(Node* parent, float initial_radius, float roll, float pitch) 
    {
        Node* node = new Node();
        node->children = new std::vector<Node*>();
        node->parent = parent;

        node->length = 0.0f;
        node->radius = initial_radius;
        node->weight = 0.0f;

        node->roll = roll;
        node->pitch = pitch;

        return node;
    }

    /// @brief frees the node and all of its child nodes
    /// @param node the node to free
    void freeNode(Node* node) 
    {
        // for each child free it
        for(std::vector<Tree::Node *>::iterator child = node->children->begin(); child != node->children->end(); ++child)
        {
            freeNode(*child);
        }

        free(node);
    }

} // namespace Tree


