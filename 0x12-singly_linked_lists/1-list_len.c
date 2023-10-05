#include "lists.h"

/**
 * list_len - returns number of nodes in a list
 *
 *@h: head of list
 *
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodenumber = 0;
	list_t *header;

	header = (list_t *)h;

	while (header->next != NULL)
		nodenumber++;

	return (nodenumber);
}
