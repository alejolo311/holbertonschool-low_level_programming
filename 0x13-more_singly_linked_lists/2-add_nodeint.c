#include "lists.h"
/**
 * add_nodeint - add a new node to a list
(* a blank line
*@head: the head of list
*@n: the integer to put in the new node
* Description: add a new node to a list)?
(* section header: the header of this function is lists.h)*
* Return: the head of the list.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
