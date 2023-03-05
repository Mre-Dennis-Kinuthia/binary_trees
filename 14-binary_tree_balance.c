#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree
 *
 * @tree: pointer to the root node
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (height_l > height_r ? height_l : height_r);

}
