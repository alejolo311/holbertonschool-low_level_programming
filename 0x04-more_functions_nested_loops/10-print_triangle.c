#include "holberton.h"
/**
 * print_triangle - this function print a trinangle
 * @size: larger of the triangle.
(* a blank line
* Description: this function prints a triangle?
(* section header: the header of this function is holberton.h)*
* Return: a void function, no return
*/
void print_triangle(int size)
{
	int j, i, n;

	for (j = 0; j < size; j++)
	{
		i = (size - 1) - j;
		n = j + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (n > 0)
		{
			_putchar('#');
			n--;
		}
		_putchar('\n');
	}
	size <= 0 ? _putchar('\n') : size;
}
