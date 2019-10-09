#include "holberton.h"
/**
 * _print_rev_recursion - this functions prints a string in reverse.
(* a blank line
 *@s: string to print.
* Description: this function prints a string in reverse)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void function no return
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
