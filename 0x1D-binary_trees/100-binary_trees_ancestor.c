#include "binary_trees.h"
/**
  *binary_trees_ancestor - finds the lowest common ancestor of two nodes
  *@first: pointer to a node
  *@second: pointer to a node
  *Return: binary tree pointer for common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	if (first && first->parent && second && second->parent)
	{
		if (first->parent->n == second->n)
			return (first->parent);
		if (second->parent->n == first->n)
			return (second->parent);
		if (first->parent == second->parent)
			return (first->parent);
		if (second->parent)
			return (binary_trees_ancestor(first, second->parent));
		if (first->parent)
			return (binary_trees_ancestor(first->parent, second));
	}
	return (NULL);
}
