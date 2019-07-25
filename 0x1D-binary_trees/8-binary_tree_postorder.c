#include "binary_trees.h"
/**
  *binary_tree_postorder - goes through a binary tree using post-order trav.
  *@tree:  pointer to the root node
  *@func: pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
