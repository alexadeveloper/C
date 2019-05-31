#include "hash_tables.h"
/**
  *hash_table_delete- deletes a hash table
  *@ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int cont;
	hash_node_t *aux;

	if (!ht)
	{
		return;
	}
	for  (cont = 0; cont < ht->size; cont++)
	{
		while (!ht->array)
		{
			aux = ht->array[cont];
			free(aux->key);
			free(aux->value);
			ht->array[cont] = ht->array[cont]->next;
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
