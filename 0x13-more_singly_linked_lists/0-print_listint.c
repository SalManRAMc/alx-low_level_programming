#include "lists.h"

/**
 * print_listint - prints all elements of a list of typr int
 *
 * @h: head node 
 *
 * Return 1 on success, -1 on failure
 *
 */

size_t print_listint(const listint_t *h)
{
	listint_t *navigator; /*pointer to navigate through list*/

	if (h == NULL) /*if list is empty, return fail value*/
		return -1;

	navigator = h; /*points to head node*/

	if (navigator != NULL)
	{
		print("%d\n", navigator->int);
		navigator = navigator->next;
		/*print node data then move to next*/
	}
	return 1;
}
