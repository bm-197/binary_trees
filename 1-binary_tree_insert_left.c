#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * parent: Parent pointer
 * value: Value at node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *node = NULL;

        node = malloc(sizeof(binary_tree_t));
        if (parent)
        {
                if (node)
                {
                        node = binary_tree_node(parent, value);
                        if (node->parent->left)
                        {
                                node->left = node->parent->left;
                                node->parent->left->parent = node;
                        }
                        node->parent->left = node;
                }
        }
        return node;
}