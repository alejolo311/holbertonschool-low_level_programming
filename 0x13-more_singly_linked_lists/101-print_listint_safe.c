#include "lists.h"
/**
 * print_listint_safe - thsi function print a list in safe mode
 * @head: the head of list
 * Description: this function print a string in a safe mode
 * section header: the header of this function is lists.h)*
 * Return: the size of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int difference, i, number;
	void *address;

	i = 0;

	while (head != NULL)
	{
		difference = head - head->next;
		i++;
		number = head->n;
		printf("[%p] %i\n", (void *)head, number);
		if (difference > 0)
			head = head->next;
		else
		{
			address = head->next;
			number = head->next->n;
			printf("-> [%p] %i\n", address, number);
			break;
		}

	}
	return (i);
}
