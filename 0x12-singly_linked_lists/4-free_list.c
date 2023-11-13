#include "lists.h"

/**
* free_list - frees a list
*
* @head: address of first node in list
*
* Function return type is void and will therefore return nothing
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str); /* store next node before freeing current one */
		free(head);
		head = temp; /* move to next node */
	}
}
