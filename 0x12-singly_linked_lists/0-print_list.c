#include "lists.h"
/**
 * print_list - print the elements in a list.
(* a blank line
 *@h: the list
* Description: print the elements of one list)?
(* section header: the header of this function is lists.h)*
* Return: this return the num of the elements in the list
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h ; i++)
	{
		if (h->str == '\0')
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}

	return (i);
}
