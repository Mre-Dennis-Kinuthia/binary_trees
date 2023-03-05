#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling of
 * Return: pointer to the sibling, NULL otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right && node->parent->left)
	{
		if (node == node->parent->right)
			return (node->parent->left);
		else
			return (node->parent->right);
	}
	else
		return (NULL);
}
