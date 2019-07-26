#include "binary_trees.h"
/**
  *binary_tree_size - measures the size of a binary tree
  *@tree: pointer to a node
  *Return: node tree_depth
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (!tree)
		return (0);
	left_size  = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	return (left_size + right_size + 1);
}

/**
 * isComplete - true/false if its complete
 * @tree: pointer to a node
 * @index: node index
 * @size: tree size
 * Return: 1 or 0 if its complete
 */
int isComplete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	return (isComplete(tree->left, (2 * index) + 1, size) &&
			isComplete(tree->right, (2 * index) + 2, size));
}

/**
  *binary_tree_is_complete - checks if a binary tree is complete
  *@tree: pointer to a node
  *Return: 0 or 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t index = 0;

	if (tree)
		return (isComplete(tree, index, binary_tree_size(tree)));
	return (0);
}
