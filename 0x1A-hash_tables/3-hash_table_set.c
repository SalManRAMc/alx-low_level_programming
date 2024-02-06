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
	hash_node_t *current;
	unsigned long int accessindex, i;

	if(ht == NULL || key == NULL || value == NULL || ht->size == 0 
			|| strlen(key) == 0)
		return (0);

	accessindex = key_index(key, ht->size);
	for(i = 0; i < size; i++)
	{
		if (i == accessindex)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (strcmp(current->key, key) == 0)
				{
					current->value = value; /*Update value if already exists*/
					return (1);
				}
				else
					current = current->next;
			}
			current = create_hnode(key, value);
			current->next = ht->array[i];
			ht->array[i] = current->next;
		}
	}

}
