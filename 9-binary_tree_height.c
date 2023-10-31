#include "binary_trees.h"

/**
 * binary_tree_heigh - Measures the height of a binary tree
 * @tree: Pointer to the root
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (binary_tree_height(tree->left) + 1);
	else
		return (binary_tree_height(tree->right) + 1);

	return (-1);
}