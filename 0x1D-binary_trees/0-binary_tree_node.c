#include "binary_trees.h"
/**
 *binary_tree_node-  inserts a node
 *@parent: pointer to the node to insert the left-child in
 *@value: value to store in the new node
 *Return: a pointer to the created node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nuevo;

	nuevo = malloc(sizeof(binary_tree_t));
	if (nuevo == NULL)
	{
		return (NULL);
	}
	nuevo->parent = parent;
	nuevo->left = nuevo->right = NULL;
	nuevo->n = value;
	return (nuevo);
}
