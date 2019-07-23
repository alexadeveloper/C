#include "binary_trees.h"
/**
 *binary_tree_insert_right-  inserts a node as the right-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: value to store in the new node
 *Return: a pointer to the created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo;

	if (parent == NULL)
	{
		return (NULL);
	}
	nuevo = malloc(sizeof(binary_tree_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	nuevo->parent = parent;
	nuevo->left = nuevo->right = NULL;
	nuevo->n = value;
	if (parent->right != NULL)
	{
		nuevo->right = parent->right;
		parent->right->parent = nuevo;
		parent->right = nuevo;
	}
	else
	{
		parent->right = nuevo;
	}
	return (nuevo);
}
