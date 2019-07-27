#include "binary_trees.h"
/**
*binary_tree_sibling- finds the sibling of a node
*@node: pointer to the node to find the sibling
*Return: NUll it is fail
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *padre;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	padre = node->parent;
	if (padre->left != node)
		return (padre->left);
	else
		return (padre->right);
}
