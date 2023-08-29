#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *temp = NULL;
	int i = 0;

	if (!tree)
		return (0);

	temp = tree->parent;
	while (temp)
	{
		i++;
		temp = temp->parent;
	}

	return (i);
}
