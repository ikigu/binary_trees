#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of nodes in binary tree
 * @tree: pointer to root node of tree whose nodes to count
 *
 * Return: number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->right || tree->left)
		nodes = 1;

	nodes = nodes + binary_tree_nodes(tree->left);
	nodes = nodes + binary_tree_nodes(tree->right);

	return (nodes);
}
