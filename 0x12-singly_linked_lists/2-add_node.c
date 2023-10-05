#include "lists.h"

/**
 * add_node - adds a new node to list
 *
 * @head: pointer to current head of list
 *
 *  head of list is dynamically allocated, hence it's a ptr
 *  hence head is a pointer to a pointer.
 *  key-concept: dynamic allocation
 *
 * @str: string to be added to new node
 *
 * Return: address of new element or NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		printf("creation of new node failed");
		return (NULL);
	}
	new_node->next = *head; /*as if to say that new_node points at the next node*/
	new_node->len = strlen(str); /*value of strlen*/
	new_node->str = strndup(str, strlen(str));
	/*use strndup as it's a safer duplication method, strlen is passed*/

	*head = new_node; /*head now points at the new node*/
	return (*head);
}
