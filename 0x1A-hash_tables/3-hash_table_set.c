#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 *
 * @ht: hash table
 * @key: key value
 * @value: value associated with key
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *newhnode;

	newhnode->key = key;
	newhnode->value = value;
	newhnode->next = NULL;

	for(index = 0; ht->array[index] != NULL; index++)
	{
		if (ht->array[index] == newhashnode->key)
		{
			if (ht->array[index] == NULL)
			{
				ht->array[index++] = newhashnode;
				return (1);
			}
			else
				return (0);
		}
	}
	return (0);
}
