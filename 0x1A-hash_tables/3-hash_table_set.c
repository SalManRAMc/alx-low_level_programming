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
	hash_node_t *navigator, *new_node;
	unsigned long int accessindex, i;
	char *newvalue;

	if (ht == NULL || key == NULL || value == NULL || ht->size == 0
			|| strlen(key) == 0)
		return (0);
	accessindex = key_index((const unsigned char *)key, ht->size);
	for (i = 0; i < ht->size; i++)
	{
		if (i == accessindex)
		{
			navigator = ht->array[i];
			while (navigator != NULL)
			{
				if (strcmp(navigator->key, key) == 0)
				{
					newvalue = strdup(value); /*Update value if already exists*/
					if (newvalue != NULL)
					{
						free(navigator->value);
						navigator->value = newvalue;
						return (1);
					}
					else
					{
						free(newvalue);
						return (0);
					}
				}
				else
					navigator = navigator->next;
			} /*make new node and assign it to head of table*/
			new_node = create_hnode(key, value);
			new_node->next = ht->array[i];
			ht->array[i] = new_node;
			return (1);
		}
	return (0);
}
