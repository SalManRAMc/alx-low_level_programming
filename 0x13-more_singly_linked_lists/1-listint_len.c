#include "lists.h"

/**
*
* listint_len - returns the number nodes in a list
*
* @h: header node
*
* Return: Number of Nodes available
*
*/

size_t listint_len(const listint_t *h)
{
	int length = 1;
	const listint_t *navigator;

	if (h == NULL) /*checks if the head pointer points to NULL*/
		return (1);

	navigator = h; /*give navigator ptr address of first node*/

	while (navigator->next != NULL)
	{
		length++;
		navigator = navigator->next;
	}
	return (length);
}
