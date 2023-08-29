#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t lDepth = 0, rDepth = 0;

	if (!tree)
		return (0);

	lDepth = binary_tree_depth(tree->left);
	rDepth = binary_tree_depth(tree->right);

	if (lDepth > rDepth)
		return (lDepth + 1);
	return (rDepth + 1);
}
