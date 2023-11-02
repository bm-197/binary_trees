#include "binary_trees.h"

/**
 * binary_tree_balance - Mearures the balance factor of a binary tree
 * @tree: Pointer to the tree
 * Return: 0 if tree is NULL, the balance factor otherwise
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}