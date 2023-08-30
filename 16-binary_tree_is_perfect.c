#include "binary_trees.h"

/**
 * check_node - Check if binary tree is full
 * @tree: root
 *
 * Return: depth
 */
int check_node(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (check_node(tree->left) + check_node(tree->right) + 1);

	return (0);
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: root
 *
 * Return: 1 if it's perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = check_node(tree->left);
	right = check_node(tree->right);

	if (left == right)
		return (1);

	return (0);
}

