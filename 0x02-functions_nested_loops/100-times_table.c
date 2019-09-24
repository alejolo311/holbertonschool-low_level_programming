#include "holberton.h"
/**
 * print_times_table - This functions prints times table
 * @n: the table to print
(* a blank line
 * Description: this function print times table)?
(* section header: the header file for this function is holberton.h)*
 * Return: no return a void function.
 */
void print_times_table(int n)
{
	int table, number;
	if(n < 15)
	{
	for (table = 0; table <= n; table++)
	{
		for (number = 0; number <= n; number++)
		{
			int r;

			r = table * number;

			if (number && r < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (r >= 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else
			{
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
	}
}
