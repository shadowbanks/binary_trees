#include "binary_trees.h"

/**
 * binary_tree_nodes - Calculate the number of Nodes of a BT
 * @tree: BT root
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lNode = 0, rNode = 0;

	if (tree == NULL)
		return (0);

	lNode = binary_tree_nodes(tree->left);
	rNode = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (lNode + rNode + 1);
	return (lNode + rNode + 0);
}
