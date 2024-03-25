#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert right child in
 * @value: value to store in the new node
 *
 * Return: NULL if parent is NULL or child can't be created,
 * ELSE, return pointer to the created node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child;
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	new_right_child = binary_tree_node(parent, value);

	if (!new_right_child)
		return (NULL);

	if (parent->right)
	{
		tmp = parent->right;
		tmp->parent = new_right_child;
		parent->right = new_right_child;
		new_right_child->right = tmp;
	}
	else
	{
		parent->right = new_right_child;
	}

	return (new_right_child);
}
