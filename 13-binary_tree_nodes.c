#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child in a binary tree
 *
 * @tree: pointer to the root node of the tree
 * Return: number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
