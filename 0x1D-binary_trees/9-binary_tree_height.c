#include "binary_trees.h"
/**
  *binary_tree_height - measures the height of a binary tree
  *@tree: pointer to the root node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree && (tree->left || tree->right))
	{
		left_size = binary_tree_height(tree->left);
		right_size = binary_tree_height(tree->right);
		if (left_size < right_size)
			return (right_size + 1);
		else
			return (left_size + 1);
	}
	return (0);
}
