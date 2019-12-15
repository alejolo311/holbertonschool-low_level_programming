#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: the list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
