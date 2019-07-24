#include "binary_trees.h"
/**
 *binary_tree_insert_left-  inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: value to store in the new node
 *Return: a pointer to the created node, or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left != NULL)
	{
		nuevo->left = parent->left;
		parent->left->parent = nuevo;
		parent->left = nuevo;
	}
	else
	{
		parent->left = nuevo;
	}
	return (nuevo);
}
