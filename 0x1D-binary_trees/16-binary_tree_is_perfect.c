#include "binary_trees.h"
/**
  *binary_tree_height - measures the height of a binary tree
  *@tree: pointer to the root node
  *Return: size_t tree_height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree && (tree->left || tree->right))
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
 *binary_tree_is_perfect- checks if a binary tree is perfect
 *@tree:  pointer to the root node
 *Return: 1 it is true 0 it is fail
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->right) &&
		binary_tree_is_perfect(tree->left))
		{
			return (1);
		}
	}
return (0);
}
