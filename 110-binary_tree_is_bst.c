#include "binary_trees.h"

/**
 * binary_tree_is_bst - Check if a tree is a BST
 * @tree: root
 *
 * Return: 1 if BST or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int lNode = 0, rNode = 0;

	if (tree == NULL)
		return (0);

	if (tree->right && tree->right->n > tree->n)
		return (1);
	if (tree->left && tree->left->n > tree->n)
		return (1);
	lNode = binary_tree_is_bst(tree->right);
	rNode = binary_tree_is_bst(tree->left);
	return (lNode && rNode);
}
