#include "lists.h"

/**
* add_nodeint_end - add node at the end of list
* 
* @head: pointer to head (head is a pointer to list)
* @n: data integer to be added
*
* Return: address of new element or NULL on failure
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlastnode, *navigator;

	newlastnode = (listint_t *)malloc(sizeof(listint_t));
	if (newlastnode == NULL)
		return (NULL);

	navigator = *head;
	
	newlastnode->n = n;
	newlastnode->next = NULL;

	if (navigator == NULL)
	{
		*head = newlastnode; /*if list is empty, point head to new node*/
	}
	else
	{
		while(navigator->next != NULL) /*check if we reached last node*/
		{
			navigator = navigator->next;
		}

		navigator->next = newlastnode;
	}

	newlastnode->n = n;
	newlastnode->next = NULL;

	return (newlastnode);
}
