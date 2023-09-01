#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: BT root
 *
 * Return: factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}

/**
 * tree_depth - Calculate the depth of a binary tree
 * @tree: BT root
 *
 * Return: BT depth
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t lDepth = 0, rDepth = 0;

	if (!tree)
		return (0);

	lDepth = tree_depth(tree->left);
	rDepth = tree_depth(tree->right);

	if (lDepth > rDepth)
		return (lDepth + 1);
	return (rDepth + 1);
}

/**
 * binary_tree_height - calculate the height of a binary tree
 * @tree: BT root
 *
 * Return: BT's height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	return (tree_depth(tree) - 1);
}
