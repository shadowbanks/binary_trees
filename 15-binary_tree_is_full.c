#include "binary_trees.h"

/**
 * check_node - check if tree is a full tree
 * @tree: BT root
 *
 * Return: 1 if a full, 0 otherwise
 */
int check_node(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (check_node(tree->left) && check_node(tree->right));

	return (0);
}

/**
 * binary_tree_is_full - check if tree is a full tree
 * @tree: BT root
 *
 * Return: 1 if a full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (check_node(tree));
}
