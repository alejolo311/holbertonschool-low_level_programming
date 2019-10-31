#include "lists.h"
/**
 * add_node_end - add a new node to the end of a list
(* a blank line
 *@head: the head of list
 *@str: the string to put in the new node
* Description: add a new node to the end of a list)?
(* section header: the header of this function is lists.h)*
* Return: the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *tail;
	char *_str;

	tail = *head;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	_str = strdup(str);
	if (_str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(_str);
	node->str = _str;
	node->next = '\0';

	if (*head == '\0')
	{
		*head = node;
		return (node);
	}

	while (tail->next)
		tail = tail->next;

	tail->next = node;

	return (tail);

}
/**
 * _strlen - this functions prints the lenght of a string
 (* a blank line
 *@s: string to print.
 * Description: this function prints the lenght of a string?
 (* section header: the header of this function is holberton.h)*
 * Return: retunrn the lenght in int
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen(s));
	}
	else
		return (0);
}
