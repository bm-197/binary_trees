#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * parent: Parent node.
 * value: Value at node.
 * Return: A binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
        binary_tree_t *node = NULL;

        node = malloc(sizeof(binary_tree_t));
        if (node)
        {
                node->parent = parent;
                node->n = value;
                node->left = NULL;
                node->right = NULL;
        }
        return node;
}