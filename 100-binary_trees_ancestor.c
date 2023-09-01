#include "binary_trees.h"

/**
 * tree_depth - Calculate the depth of a binary tree
 * @tree: BT root
 *
 * Return: BT depth
 */
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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *firstTemp = NULL, *secondTemp = NULL;
	size_t firstDepth = 0, secDepth = 0, depth = 0, i = 0, j = 0;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);
	firstDepth = tree_depth(first);
	secDepth = tree_depth(second);
	if (firstDepth < secDepth)
		depth = firstDepth;
	else
		depth = secDepth;

	firstTemp = first->parent;
	secondTemp = second->parent;
	while (i <= depth)
	{
		j = 0;
		while (j <= depth)
		{
			if (firstTemp == secondTemp)
				return (firstTemp);
			secondTemp = secondTemp->parent;
			j++;
		}
			firstTemp = firstTemp->parent;
			i++;
	}
	return (NULL);
}
