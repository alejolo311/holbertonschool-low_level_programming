#include "lists.h"
/**
 * pop_listint - delete the head node
(* a blank line
*@head: the head of list
* Description: this function delete the head note)?
(* section header: the header of this function is lists.h)*
* Return: void, no return
*/
int pop_listint(listint_t **head)
{
	listint_t *actual;
	int result;

	if (*head == NULL || head == NULL)
		return (0);
	actual = *head;
	result = actual->n;
	*head = (*head)->next;
	free(actual);
	return (result);
}
