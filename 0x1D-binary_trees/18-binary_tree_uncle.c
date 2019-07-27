#include "binary_trees.h"
/**
*binary_tree_uncle- finds the uncle of a node
*@node: pointer to the node to find the uncle
*Return: NUll it is fail
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *padre;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	padre = node->parent;
	if (padre->parent->left != padre)
		return (padre->parent->left);
	else
		return (padre->parent->right);
}
