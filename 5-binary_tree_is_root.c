#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is root
 * @node: BT node
 *
 * Return: 1 if root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
