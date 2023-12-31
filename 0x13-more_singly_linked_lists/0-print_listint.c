#include "lists.h"

/**
 * print_listint - prints all elements of a list of containing int
 *
 * @h: head node
 *
 * Return: no of nodes on success, 0 if there aren't any
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *navigator; /*pointer to navigate through list*/
	int count = 0;

	if (h == NULL) /*if list is empty, return fail value*/
		return (0);

	navigator = h; /*points to head node*/

	while (navigator != NULL)
	{
		printf("%d\n", navigator->n);
		count++;
		navigator = navigator->next;
		/*print node data then move to next*/
	}
	return (count);
}
