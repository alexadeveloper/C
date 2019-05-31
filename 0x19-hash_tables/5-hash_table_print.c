#include "hash_tables.h"
/**
  *hash_table_print- prints a hash table
  *@ht: isthe hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int nodes, cont;
	hash_node_t *list;
	int aux;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (cont = 0; cont < ht->size; cont++)
	{
		list = ht->array[cont];
		for (nodes = 0; list != NULL; nodes++)
		{
			if (aux == 0)
			{
				printf("'%s': '%s'", list->key, list->value);
				aux = 1;
			}
			else
			{
				printf(", '%s': '%s'", list->key, list->value);
			}
			list = list->next;
		}
	}
	printf("}");
	printf("\n");
}
