#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * @node: the node to check if root
 * Return: 1 is root 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
