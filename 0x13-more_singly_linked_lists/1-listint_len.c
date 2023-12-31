#include "lists.h"

/**
* listint_len - returns the number nodes in a list
*
* @h: header node
*
* Return: Number of Nodes available
*/

size_t listint_len(const listint_t *h)
{
	size_t length = 0;
	const listint_t *navigator;

	if (h == NULL) /*checks if the head pointer points to NULL*/
		return (0);

	navigator = h; /*give navigator ptr address of first node*/

	while (navigator != NULL)
	{
		length++;
		navigator = navigator->next;
	}
	return (length);
}
