#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node in a binary tree
 * @node: pointer to node for which to find the sibling
 *
 * Return: NULL if node is NULL, if no sibling exists or parent is NULL.
 * Otherwise, return pointer to sibling
*/


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !(node->parent))
		return (NULL);

	parent = node->parent;

	if (parent->right && parent->right != node)
		return (parent->right);

	if (parent->left && parent->left != node)
		return (parent->left);

	return (NULL);
}
