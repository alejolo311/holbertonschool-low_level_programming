#include "holberton.h"
/**
 * times_table - This functions prints the longest day of jack baur
(* a blank line
 * Description: this function print the longest day of jack bauer)?
(* section header: the header file for this function is holberton.h)*
 * Return: no return a void function.
 */
void  times_table(void)
{
	int table, number;

	for (table = 0; table <= 9; table++)
	{
		for (number = 0; number <= 9; number++)
		{
			int r;

			r = table * number;
			if (r >= 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else
			{
				_putchar(r + '0');
			}
			if ( number == 9)
			{
				;
			}
			else if (((r * 1.5) >= 10) && number != 5)
			{
				_putchar(',');
				_putchar(' ');
			}
			else if (number == 5 && (r*2) > 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
