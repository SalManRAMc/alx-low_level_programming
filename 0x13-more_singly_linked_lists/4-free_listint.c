#include "lists.h"

/**
 * free_listint - frees list
 *
 * @head: head node
 *
 * Return nothing, tis void
*/


void free_listint(listint_t *head)
{
	listint_t *temporarynode, *navigator;

	if (head == NULL)
		return;

	navigator = head;

	while (navigator != NULL)
	{
		temporarynode = navigator->next;
		free(navigator);
		navigator = temporarynode;
	}
}
