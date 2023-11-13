#include "lists.h" 

/**
*
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

	if (navigator == NULL)
		return (-1);

	newnode = (listint_t *)malloc(sizeof(listint_t));
	newnode->next = head->next;
	newnode->n = n;
	head->next = newnode;

	return (&newnode);
}
