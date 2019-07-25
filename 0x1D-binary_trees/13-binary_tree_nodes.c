#include "binary_trees.h"
/**
  *binary_tree_nodes - counts the nodes with at least 1 child.
  *@tree: pointer to a node
  *Return: node tree_depth
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree && (tree->left || tree->right))
	{
		left_size  = binary_tree_nodes(tree->left);
		right_size = binary_tree_nodes(tree->right);
		return (left_size + right_size + 1);
	}
	return (0);
}
