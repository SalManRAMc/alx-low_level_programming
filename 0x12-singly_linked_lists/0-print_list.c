#include "lists.h"

/**
 *
 * print_list - prints all elements of a list
 *
 * @h: header of list
 *
 * Return: Number of Nodes
 */

size_t print_list(const list_t *h)
{
	size_t elementnumber = 0;
	list_t *header;

	header = (list_t *)h;

	while (header != NULL)
	{
		if(header->str == NULL)
		{
			header->str = "(nil)";
			header->len = 0;
		}
		printf("[%d] %s\n", header->len, header->str);
		header = header->next;
		elementnumber++;
	}
	return(elementnumber);
}
