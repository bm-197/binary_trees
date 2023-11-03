#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to be measured
 * Return: if tree is NULL 0, otherwise depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		while (tree->parent)
		{
			depth++;
			tree = tree->parent;
		}
	}

	return (depth);
}
