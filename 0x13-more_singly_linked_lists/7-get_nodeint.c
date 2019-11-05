#include "lists.h"
/**
 * get_nodeint_at_index - get the index of a node.
 * a blank line
 * @head: the head of list
 * @index: the index to find
 * Description: this function delete the head note)?
 * section header: the header of this function is lists.h)*
 * Return: void, no return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *actual;
	unsigned int i;


	actual = head;

	for (i = 0; actual; i++)
	{
		if (i == index)
			return (actual);
		actual = actual->next;
	}
	return (actual);
}
