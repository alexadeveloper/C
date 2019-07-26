#include "binary_trees.h"
/**
  *binary_tree_is_full - checks if a binary tree is full
  *@tree: pointer to a node
  *Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		if (tree->left && tree->right)
		{
			left_size  = binary_tree_is_full(tree->left);
			right_size = binary_tree_is_full(tree->right);
			return (left_size && right_size);
		}
	}
	return (0);
}
