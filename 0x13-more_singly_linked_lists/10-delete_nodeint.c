#include "lists.h"
/**
 * delete_nodeint_at_index - thsi function delete a node
 * @head: the head of list
 * @index: the index to put the delete node
 * Description: this function delete a node
 * section header: the header of this function is lists.h)*
 * Return: 1 in success -1 in failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *actual, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	actual = *head;

	if (index == '\0')
	{
		*head = actual->next;
		free(actual);
		return (1);
	}

	for (i = 0; actual && i < index - 1; i++)
		actual = actual->next;

	if (actual == NULL || actual->next == NULL)
		return (-1);

	next = actual->next->next;
	free(actual->next);
	actual->next = next;
	return (1);
}
