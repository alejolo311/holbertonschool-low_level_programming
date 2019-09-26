#include "holberton.h"
/**
 * print_line - this function lines
 * @n: larger of the line.
(* a blank line
* Description: this function prints lines?
(* section header: the header of this function is holberton.h)*
* Return: a void function, no return
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
