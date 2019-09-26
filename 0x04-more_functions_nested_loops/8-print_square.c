#include "holberton.h"
/**
 * print_square - this function print a square
 * @size: larger of the square.
(* a blank line
* Description: this function prints a square?
(* section header: the header of this function is holberton.h)*
* Return: a void function, no return
*/
void print_square(int size)
{
	int i, j;

	size == 0 ? _putchar('\n') : size;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
