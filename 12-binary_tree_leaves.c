#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lNode = 0, rNode = 0;
	if (tree == NULL)
		return (0);

	lNode = binary_tree_leaves(tree->left);
	rNode = binary_tree_leaves(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		return (lNode + rNode + 1);
	return (lNode + rNode + 0);
}
