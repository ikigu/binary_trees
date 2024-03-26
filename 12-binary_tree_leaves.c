#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaves in binary tree
 * @tree: pointer to root node of tree whose leaves to count
 *
 * Return: number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!(tree->right) && !(tree->left))
		return (1);

	leaves = leaves + binary_tree_leaves(tree->left);
	leaves = leaves + binary_tree_leaves(tree->right);

	return (leaves);
}
