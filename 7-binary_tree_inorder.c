#include "binary_trees.h"

/**
 * binary_tree_inorder - Display a binary tree using inorder
 * @tree: root of BT
 * @func: function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
