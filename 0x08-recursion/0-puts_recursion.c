#include "holberton.h"
/**
 * _puts_recursion - this functions prints a string.
(* a blank line
 *@s: string to print.
* Description: this function prints a string)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void function no return
*/
void _puts_recursion(char *s)
{
	int start;

	start = 0;
	if (*(s + start) != '\0')
	{
		_putchar(*(s + start));
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
