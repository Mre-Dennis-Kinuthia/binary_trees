#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node
 * Return: 1if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right_nodes = 0, left_nodes = 0;
	size_t right_height = 0, left_height = 0;

	if (!tree)
		return (0);

	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
		if (left_nodes == right_nodes)
			return (1);
	return (0);
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

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);

}

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (!tree)
		return (0);

	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);

	return (count);
}
