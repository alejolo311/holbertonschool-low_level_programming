#include "lists.h"

/**
 * sum_dlistint - sum a list
 * @head: the list
 * Return: the sm
 */
int sum_dlistint(dlistint_t *head)
{
		int result = 0;
		dlistint_t *actual;

		actual = head;

		while (actual)
		{
			result += actual->n;
			actual = actual->next;
		}
		return (result);
}
