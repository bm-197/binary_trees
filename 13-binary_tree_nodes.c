#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to be counted.
 * Return: The number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree)
	{
		if (tree->left && tree->right)
			node += 1;

		if (tree->left && tree->right)
		{
			node += binary_tree_nodes(tree->left);
			node += binary_tree_nodes(tree->right);
		}
	}
	return (node);
}