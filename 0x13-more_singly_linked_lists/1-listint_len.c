#include "lists.h"
/**
 * listint_len - count the number of elements
(* a blank line
*@h: the list
* Description: count the number of elements)?
(* section header: the header of this function is lists.h)*
* Return: this return the num of the elements in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
