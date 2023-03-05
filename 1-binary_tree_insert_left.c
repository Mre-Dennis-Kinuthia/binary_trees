#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left child of another node
*
* @parent: pointer to the node to insert the left child in
* @value: value to put in the new node
* Return: pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *left_node, *temp;

if (parent == NULL)
return (NULL);

if (parent->left != NULL)
{
temp = parent->left;
left_node = binary_tree_node(parent, value);
if (left_node == NULL)
return (NULL);
parent->left = left_node;
left_node->left = temp;
temp->parent = left_node;
temp->left = NULL;
}
else
{
left_node = binary_tree_node(parent, value);
if (left_node == NULL)
return (NULL);
parent->left = left_node;
}
return (left_node);
}
