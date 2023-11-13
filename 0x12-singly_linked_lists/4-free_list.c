#include "lists.h"

/**
* free_list - frees all nodes of a list
*
* @head: pointer to head node
*
* Function return type is void and will therefore return nothing
*/

void free_list(list_t *head)
{
	list_t *tempnode;

	if (!head)
		return;

	while (head != NULL)
	{
		tempnode = head->next;
		free(head->str); /* store next node before freeing current one */
		free(head);
		head = tempnode; /* move to next node */
	}
}
