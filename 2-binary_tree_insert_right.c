#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child.
 * @parent: Parent pointer.
 * @value: Value at node
 * Return: A binary tree
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent)
	{
		node = binary_tree_node(parent, value);
		if (node)
		{
			if (parent->right)
			{
				node->right = parent->right;
				parent->right->parent = node;
			}
			parent->right = node;
		}
	}
	return (node);
}
