#include "binary_trees.h"
/**
 *binary_tree_delete-  delete a tree
 *@tree: pointer to the node root
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		free(tree);
		return;
	}
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	free(tree);
}
