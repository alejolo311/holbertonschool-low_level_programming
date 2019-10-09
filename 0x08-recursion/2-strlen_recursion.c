#include "holberton.h"
/**
 * _strlen_recursion - this functions prints the lenght of a string
(* a blank line
 *@s: string to print.
* Description: this function prints the lenght of a string?
(* section header: the header of this function is holberton.h)*
* Return: retunrn the lenght in int
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);
}
