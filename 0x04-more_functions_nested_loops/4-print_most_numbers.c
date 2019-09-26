#include "holberton.h"
/**
 * print_most_numbers - this function prints the digit from 0 to 9
(* a blank line
* Description: this function prints the numbers from 0 to 9 without 2-4)?
(* section header: the header of this function is holberton.h)*
* Return: a void function, no return
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
