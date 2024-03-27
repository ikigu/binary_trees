#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;

	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;

	return (left_height - right_height);
}
