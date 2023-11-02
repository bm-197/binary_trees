#include "binary_trees.h"

/**
 * binary_tree_balance - Mearures the balance factor of a binary tree
 * @tree: Pointer to the tree
 * Return: 0 if tree is NULL, the balance factor otherwise
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree)
	{
		l = (tree->left) ?  1 + binary_tree_balance(tree->left) : 0;
		r = (tree->right) ? 1 + binary_tree_balance(tree->right) : 0;

	}
	
	return (l - r);
}