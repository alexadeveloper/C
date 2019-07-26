#include "binary_trees.h"

/**
  *binary_tree_height - measures the height of a binary tree
  *@tree: pointer to the root node
  *Return: size_t tree_height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree)
	{
		left_size  = binary_tree_height(tree->left);
		right_size = binary_tree_height(tree->right);
		if (left_size < right_size)
			return (right_size + 1);
		else
			return (left_size + 1);
	}
	return (0);
}

/**
  *binary_tree_balance - measures the balance factor of a binary tree
  *@tree: pointer to a node
  *Return: node tree_depth
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree)
	{
		left_size  = binary_tree_height(tree->left);
		right_size = binary_tree_height(tree->right);
		return (left_size - right_size);
	}
	return (0);
}
