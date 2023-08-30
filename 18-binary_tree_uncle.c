#include "binary_trees.h"

/**
 * binary_tree_uncle - Get the uncle node of a node
 * @node: neice/nephew node
 *
 * Return: uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gParent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	gParent = node->parent->parent;
	if (gParent == NULL)
		return (NULL);
	if (gParent->left != node->parent)
		return (gParent->left);
	return (gParent->right);
}
