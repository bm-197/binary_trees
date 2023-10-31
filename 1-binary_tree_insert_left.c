#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * @parent: Parent pointer
 * @value: Value at node
 * Return: a binary tree
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (node)
		{	
			if (parent->left)
			{
				node->left = parent->left;
				parent->left->parent = node;
			}
			parent->left = node;
		}
	}
	return (node);
}
