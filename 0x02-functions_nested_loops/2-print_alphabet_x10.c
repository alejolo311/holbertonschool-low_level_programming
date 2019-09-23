#include "holberton.h"
/**
 * print_alphabet_x10 - This functions print the alphabet 10 times
(* a blank line
 * Description: this function use a for to print the alphabet ten times)?
(* section header: the header file for this function is holberton.h)*
 * Return: this funcion dont have a return value
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
