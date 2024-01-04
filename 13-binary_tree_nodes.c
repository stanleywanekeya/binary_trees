#include "binary_trees.h"

/**
 * binary_tree_nodes - return child of tree
 * @tree: tree to find node with one child
 * Return: child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 0;

	if (tree)
	{
		child += (tree->right || tree->left) ? 1 : 0;
		child += binary_tree_nodes(tree->left);
		child += binary_tree_nodes(tree->right);
	}
	return (child);
}
