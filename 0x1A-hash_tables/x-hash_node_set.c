#include "hash_tables.h"

/**
 * create_hnode - creates a hashnode with provided data
 *
 * @key: key string;
 * @value: value inside node
 *
 * Return: address of hash node
*/

hash_node_t *create_hnode(const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (NULL);
	
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode);
		return (NULL);
	}

	newnode->next = NULL;
	return (newnode);
}
