#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *firstTemp = NULL, *secondTemp = NULL;
	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);

	firstTemp = first->parent;
	secondTemp = second->parent;
	while(firstTemp != NULL)
	{
		while(secondTemp != NULL)
		{
			if(firstTemp == secondTemp)
				return (firstTemp);
			secondTemp = secondTemp->parent;
		}
			firstTemp = firstTemp->parent;
	}
	return (NULL);
}
