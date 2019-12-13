#include "lists.h"

/**
 * dlistint_len - return the len of a double list
 * @h: the double linked list
 * Return: the len of the lists
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t len = 0;

	while (actual)
	{
		actual = actual->next;
		len++;
	}
	return (len);
}