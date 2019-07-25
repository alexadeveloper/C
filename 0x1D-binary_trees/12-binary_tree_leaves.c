#include "binary_trees.h"
/**
  *binary_tree_leaves - measures the size of a binary tree
  *@tree: pointer to a node
  *Return: node tree_depth
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left_size  = binary_tree_leaves(tree->left);
	right_size = binary_tree_leaves(tree->right);
	return (left_size + right_size);
}
