#include "hash_tables.h"
/**
  *hash_table_delete- deletes a hash table
  *@ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int cont;
	hash_node_t *aux;

	if (ht == NULL)
	{
		return;
	}
	for  (cont = 0; cont < ht->size; cont++)
	{
		while (ht->array[cont] != NULL)
		{
			aux = ht->array[cont];
			free(aux->value);
			free(aux->key);
			free(aux);
			ht->array[cont] = ht->array[cont]->next;
		}
	}
	free(ht->array);
	free(ht);
}
