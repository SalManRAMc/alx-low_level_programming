#include "lists.h"

/**
 * free_listint2 - frees list
 *
 * @head: pointer to head node
 *
 * Return nothing, tis void
*/


void free_listint2(listint_t **head)
{
	listint_t *temporarynode, *navigator;

	if (head == NULL || *head == NULL)
		return;

	navigator = *head;

	while (navigator != NULL)
	{
		temporarynode = navigator->next;
		free(navigator);
		navigator = temporarynode;
	}
	*head = NULL; /*set the original head pointer to NULL after freeing list*/
}
