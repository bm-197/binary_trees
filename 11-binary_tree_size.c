#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root
 * Return: 0 if tree is NULL, size other wise
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_size(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_size(tree->right) : 0;
		return((l + r) + 1);	
	}
	return 0;
}
	