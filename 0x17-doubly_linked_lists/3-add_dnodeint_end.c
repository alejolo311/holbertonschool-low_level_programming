#include "lists.h"

/**
 * add_dnodeint_end - add a node in the tail of a double linked list
 * @head: the list
 * @n: the value to store in the node
 * Return: the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *actual;

	actual = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;

	if (actual == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (actual->next)
	{
		actual = actual->next;
	}
	actual->next = new;
	new->prev = actual;
	return (new);
}
