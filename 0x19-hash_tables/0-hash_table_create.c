#include "hash_tables.h"
/**
  *hash_table_create- create a hash table
  *@size: the size
  *Return: Null it is fail, the pointer is ok
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **nodes;
	hash_table_t *table;
	unsigned long int index;

	nodes = malloc(sizeof(hash_node_t *) * size);
	if (nodes == NULL)
	{
		return (NULL);
	}
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		free(nodes);
		return (NULL);
	}
	for (index = 0; index <  size; index++)
	{
		nodes[index] = NULL;
	}

	table->size = size;
	table->array = nodes;
	return (table);
}
