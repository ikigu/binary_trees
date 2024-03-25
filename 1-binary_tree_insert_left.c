#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert left child in
 * @value: value to store in the new node
 *
 * Return: NULL if parent is NULL or child can't be created,
 * ELSE, return pointer to the created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child;
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	new_left_child = binary_tree_node(parent, value);

	if (!new_left_child)
		return (NULL);

	if (parent->left)
	{
		tmp = parent->left;
		tmp->parent = new_left_child;
		parent->left = new_left_child;
		new_left_child->left = tmp;
	}
	else
	{
		parent->left = new_left_child;
	}

	return (new_left_child);
}
