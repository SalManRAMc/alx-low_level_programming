#include "lists.h"

/**
* add_nodeint - add node to list (in place of head)
*
* @head: head node
* @n: int data
*
* Return: address of new node on success, -1 on failure
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /*initialise navigator node */

	if (head == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head; /*dereferenced in order to get actual head*/
	*head = new_node; 

	return (new_node); /*return new_node*/
}
