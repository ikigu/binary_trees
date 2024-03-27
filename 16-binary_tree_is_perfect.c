#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0;
	size_t left_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
}


/**
 * binary_tree_is_perfect - checks whether a binary tree is perfect
 * @tree: pointer to the root node of the tree to check whether is full
 *
 * Return: 0 if tree is NULL or not perfect. 1 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (false);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left != height_right)
		return (false);

	if (height_left == 0 && height_right == 0)
		return (true);

	return (binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}
