#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 *
 * @parent: pointer to the node to insert the right child in
 * @value: value to put in the new node
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node, *temp;

	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		temp = parent->right;
		right_node = binary_tree_node(parent, value);
		if (right_node == NULL)
			return (NULL);
		parent->right = right_node;
		right_node->right = temp;
		temp->parent = right_node;
		temp->right = NULL;
	}
	else
	{
		right_node = binary_tree_node(parent, value);
		if (right_node == NULL)
			return (NULL);
		parent->right = right_node;

	}

	return (right_node);
}
