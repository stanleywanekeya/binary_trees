#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses tree in preorder manner
 * @tree: tree to be traversed
 * @func: function to appy to root node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
