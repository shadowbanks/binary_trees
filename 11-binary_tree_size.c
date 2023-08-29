#include "binary_trees.h"

/**
 * binary_tree_size - Find BT size
 * @tree: root pointer
 *
 * Return: size of BT
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lNode = 0, rNode = 0;

	if (tree == NULL)
		return (0);

	lNode = binary_tree_size(tree->left);
	rNode = binary_tree_size(tree->right);

	return (lNode + rNode + 1);
}
