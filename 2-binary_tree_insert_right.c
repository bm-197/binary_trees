#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child.
 * parent: Parent pointer.
 * value: Value at node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *node = NULL;

        node = malloc(sizeof(binary_tree_t));
        if (parent)
        {
                if (node)
                {
                        node = binary_tree_node(parent, value);
                        if (node->parent->right)
                        {
                                node->right = node->parent->right;
                                node->parent->right->parent = node;
                        }
                        node->parent->right = node;
                }
        }
        return node;
}