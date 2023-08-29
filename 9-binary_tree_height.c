#include "binary_trees.h"

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

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (tree_depth(tree) - 1);
}
