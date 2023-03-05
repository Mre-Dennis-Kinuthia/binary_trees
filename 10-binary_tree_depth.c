#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node to measure the depth
 * Return: depth of node @tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	while (tree->parent != NULL)
	{
		count += 1;
		tree = tree->parent;
	}

	return (count);
}
