#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotate a tree left
 * @tree: pointer to root of a tree
 *
 * Return: pointer to new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *temp2 = NULL;

	if (tree == NULL)
		return (NULL);

	temp = tree;

	if (tree->right != NULL)
		temp2 = tree->right->left;

	tree = tree->right;
	tree->parent = NULL;
	tree->left = temp;
	tree->left->parent = tree;
	tree->left->right = temp2;
	if (tree->left->right)
		tree->left->right->parent = tree->left;

	return (tree);
}
