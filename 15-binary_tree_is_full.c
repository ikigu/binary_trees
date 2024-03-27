#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 (TRUE) if is leaf, 0 (FALSE) if not leaf.
 * 0 (FALSE) if node is NULL
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (FALSE);

	if (node->left || node->right)
		return (FALSE);
	else
		return (TRUE);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or not full. 1 (TRUE) if it's full.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return FALSE;

	binary_tree_is_full(tree->right);
	binary_tree_is_full(tree->left);

	if (tree->parent && tree->right && tree->left)
		return (TRUE);
	else
		return (FALSE);
}
