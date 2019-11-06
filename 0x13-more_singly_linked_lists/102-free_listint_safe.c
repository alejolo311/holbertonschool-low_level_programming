#include "lists.h"
/**
 * free_listint_safe - thsi function free a list in safe mode
 * @h: the head of list
 * Description: this function free a string in a safe mode
 * section header: the header of this function is lists.h)*
 * Return: the size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *actual;
	size_t i;

	i = 0, actual = *h;

	if (h == NULL || *h == NULL)
		return (i);

	while (actual)
	{
		tmp = actual;
		actual = actual->next;
		free(tmp);
		i++;

		if (tmp < actual)
			break;
	}

	*h = NULL;

	return (i);
}
