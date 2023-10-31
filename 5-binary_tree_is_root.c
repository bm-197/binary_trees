#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 * @node: Node to be checked
 * Return: 1 if root, otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
		return (1);
	}
	return (0);
}
