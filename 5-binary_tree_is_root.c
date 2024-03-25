#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: pointer to the node to check
 *
 * Return: 1 (TRUE) if is root, 0 (FALSE) if not root.
 * 0 (FALSE) if node is NULL
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (FALSE);

	if (node->parent)
		return (FALSE);
	else
		return (TRUE);
}
