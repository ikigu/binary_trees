#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a binary tree node
 * @node: pointer to the node for which to find the uncle for
 *
 * Return: NULL if @node is NULL or if it has no uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent, *parent;

	if (!node)
		return (NULL);

	if (node->parent && node->parent->parent)
	{
		grandparent = node->parent->parent;
		parent = node->parent;

		if (grandparent->left && grandparent->left != parent)
			return (grandparent->left);

		if (grandparent->right && grandparent->right != parent)
			return (grandparent->right);
	}

	return (NULL);
}
