#include "binary_trees.h"

/**
 * max - calculates greater of two passed values
 * @value_a: first value
 * @value_b: second value
 *
 * Return: Greater of the two values
*/

size_t max(size_t value_a, size_t value_b)
{
	if (value_a > value_b)
		return (value_a);
	else
		return (value_b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height;
	size_t left_height;

	if (!tree)
		return (-1);

	right_height = binary_tree_height(tree->right) + 1UL;
	left_height = binary_tree_height(tree->left) + 1UL;

	return (max(left_height, right_height));
}
