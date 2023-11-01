#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node
 * Return: 0 if tree is NULL, number of leaves otherwise
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->right == NULL && tree->left == NULL)
			return (1);
		
		return(binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
	return (0);
}