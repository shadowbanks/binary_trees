#include "binary_trees.h"

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *temp2 = NULL;

	if (tree == NULL)
		return (NULL);

	temp = tree;

	if (tree->left != NULL)
		temp2 = tree->left->right;

	tree = tree->left;
	tree->parent = NULL;
	tree->right = temp;
	tree->right->parent = tree;
	tree->right->left = temp2;
	if (tree->right->left)
		tree->right->left->parent = tree->right;

	return (tree);
}
