#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: point to the root node of a tree whose size to measure
 *
 * Return: size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (!tree)
		return (0);

	size = size + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);

	return (size);
}
