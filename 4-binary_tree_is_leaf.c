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
