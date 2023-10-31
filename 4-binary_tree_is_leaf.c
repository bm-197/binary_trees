#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf
 * node: Pointer to the node to check
 * Return: 1 if leaf, otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node)
        {
                if (!(node->left || node->right))
                        return 1;
        }
        return 0;
}