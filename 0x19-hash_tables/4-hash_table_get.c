#include "hash_tables.h"
/**
  *hash_table_get- retrieves a value associated with a key
  *@ht: is the hash table you want to look into
  *@key: is the key you are looking for
  *Return: the value associated with the element, or NULL if it is fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, nodes;
	hash_node_t *list;

	if (!ht)
	{
		return (NULL);
	}
	if (key == NULL || key[0] == '\0')
	{
		return (NULL);
	}
	index = key_index((unsigned char *)key, ht->size);
	list = ht->array[index];
	if (!list)
	{
		return (NULL);
	}
	for (nodes = 0; list != NULL; nodes++)
	{
		if (strcmp(list->key, key) == 0)
		{
			return (list->value);
		}
		list = list->next;
	}
return (NULL);
}
