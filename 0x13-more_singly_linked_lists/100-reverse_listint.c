#include "lists.h"
/**
 * reverse_listint - thsi reverse a list
 * @head: the head of list
 * Description: this function delete a node
 * section header: the header of this function is lists.h)*
 * Return: 1 in success -1 in failure
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *actual;

	if (*head == NULL)
		return (NULL);

	actual = *head;
	*head = actual->next;
	tmp = (*head)->next;
	actual->next = NULL;

	if (*head == NULL || head == NULL)
	{
		*head = actual;
		return (actual);
	}

	while (tmp)
	{
		(*head)->next = actual;
		actual = *head;
		*head = tmp;
		tmp = (*head)->next;
	}

	(*head)->next = actual;
	return (*head);
}
