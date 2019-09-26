#include "holberton.h"
/**
 * more_numbers - this function prints the digit from 0 to 14
(* a blank line
* Description: this function prints the numbers from 0 to 9 ten times)?
(* section header: the header of this function is holberton.h)*
* Return: a void function, no return
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
