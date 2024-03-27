#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL or not full. 1 (TRUE) if it's full.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (true);

	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL))
	{
		return (false);
	}

	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
