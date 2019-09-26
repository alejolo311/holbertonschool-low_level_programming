#include "holberton.h"
/**
 * print_line - this function lines
 * @n: larger of the line.
(* a blank line
* Description: this function prints lines?
(* section header: the header of this function is holberton.h)*
* Return: a void function, no return
*/
void print_diagonal(int n)
{
	int i, j, spaces;

	spaces = 0;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			for(j = 0; j < spaces; j++)
			{
				_putchar(' ');
			}
		}
		spaces++;
		if ( i > 0)
			_putchar('\\');
		_putchar('\n');
	}
}
