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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;
	size_t max_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = binary_tree_balance(tree->left) + 1;

	if (tree->right)
		right_height = binary_tree_balance(tree->right) + 1;


	if (!(tree->right))
	{
		max_height = max(left_height, right_height);
		return (max_height);
	}

	return (left_height - right_height);
}
