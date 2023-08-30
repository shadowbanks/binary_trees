#include "binary_trees.h"

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
	size_t height = 0;

	height = tree_depth(tree);
	if (height == 0)
		return (0);
	return (height - 1);
}
