#include "binary_trees.h"

/**
 * binary_tree_postorder - prints the value in postorder manner
 * @tree: tree node to be traversed
 * @func: function to be applied to tree
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
