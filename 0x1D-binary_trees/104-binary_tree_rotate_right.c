#include "binary_trees.h"
/**
  *binary_tree_rotate_right - performs a right-rotation on a binary tree
  *@tree: pointer to tree root
  *Return: binary tree pointer to rotated tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (tree && tree->left)
	{
		node = tree->left;
		tree->parent = node;
		tree->left = node->right;
		node->parent = tree->parent;
		if (tree->left)
			tree->left->parent = tree;
		node->right = tree;
		return (node);
	}
	return (tree);
}
