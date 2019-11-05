#include "lists.h"
/**
 * free_listint2 - free a list
(* a blank line
*@head: the head of list
* Description: this function free a list.)?
(* section header: the header of this function is lists.h)*
* Return: void, no return
*/
void free_listint2(listint_t **head)
{
	listint_t *position, *actual;

	if (head == NULL)
		return;

	actual = *head;
	while (actual != NULL)
	{
		position = actual;
		actual = position->next;
		free(position);
	}
	*head = '\0';
	head = '\0';
}
