#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root.
 *
 * Return: If tree is NULL 0, otherwise 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int r1 = 0;
	int r2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	r1 = binary_tree_is_full(tree->left);
	r2 = binary_tree_is_full(tree->right);

	if (r1 && r2)
		return (1);

	return (0);
}
