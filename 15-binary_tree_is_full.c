#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root.
 * 
 * Return: If tree is NULL 0, otherwise 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (binary_tree_leaves(tree))
			return (0);
		return (1);
	}
	return (0);
}
