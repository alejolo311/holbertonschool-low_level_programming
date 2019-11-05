#include "lists.h"
/**
 * add_nodeint_end - add a new node to a list in the end
(* a blank line
*@head: the head of list
*@n: the integer to put in the new node
* Description: add a new node to a list in the end)?
(* section header: the header of this function is lists.h)*
* Return: the head of the list.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *actual;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		actual = *head;
		while (actual->next)
			actual = actual->next;
		actual->next = node;
	}
	return (node);
}
