#include "lists.h"

/*
 * add_node_end -  adds a node to the end of a list
 *
 * @head: pointer to start of list
 * @str: string to be added to the end of list
 * Return: address of new element on success, otherwise NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_last_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_last_node = (list_t*)malloc(sizeof(list_t));
	if (new_last_node == NULL)
	{
		printf("allocation failure");
		exit(98);
	}
	while (head->next != NULL)
	{
		head = head->next;
	}
	new_last_node->next = head->next;
	new_last_node->str = strndu
	head->next = new_last_node;
}
