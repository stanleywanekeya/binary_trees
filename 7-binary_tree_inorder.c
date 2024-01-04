#include "binary_trees.h"

/**
 * binary_tree_inorder - prints tree ini inorder manner
 * @tree: tree node to be traversed
 * @func: function to apply to node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
