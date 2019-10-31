#include "lists.h"
/**
 * list_len - return the number of elements
(* a blank line
 *@h: the list
* Description: print the elements of one list)?
(* section header: the header of this function is lists.h)*
* Return: this return the num of the elements in the list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
