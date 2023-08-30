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
 * print_node - print binary tree using
 * level-order traversal
 * @tree: pointer to the root node of the tree
 * @level: current level on the tree
 * @func: function to print node element
 */
void print_node(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	print_node(tree->left, level - 1, func);
	print_node(tree->right, level - 1, func);
}

/**
 * binary_tree_levelorder - print binary tree using
 * level-order traversal
 * @tree: pointer to the root node of the tree
 * @func: function to print node element
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0, i = 0;

	height = tree_depth(tree);
	for (; i < height; i++)
	{
		print_node(tree, i, func);
	}
}
