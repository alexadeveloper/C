#include "hash_tables.h"
/**
  *hash_table_set- adds an element to the hash table
  *@ht: hash table you want update
  *@key: is the key
  *@value: value associated with the key
  *Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *copy;
	unsigned long int index;
	int nodes;
	char *valor;

	if (key == NULL || key[0] == '\0')
	{
		return (0);
	}
	if (ht == NULL || value == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	valor = strdup(value);
	copy = ht->array[index];
	for (nodes = 0; copy != NULL; nodes++)
	{
		if (strcmp(copy->key, key) == 0)
		{
			free(copy->value);
			copy->value = valor;
			return (1);
		}
		copy = copy->next;
	}
	new->key = strdup(key);
	new->value = valor;
	new->next = ht->array[index];
	ht->array[index] = new;
return (1);
}
