#include "holberton.h"
/**
 * print_spaces - This functions prints commas and spaces
 * @n: is a intenger define the number of spaces
(* a blank line
* Description: this function prints spaces)?
* Return: no return a void function.
 */
void print_spaces(int n)
{
	int i;

	_putchar(',');

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}
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

	if (n < 0 || n > 15)
		return;
	for (table = 0; table <= n; table++)
	{
		for (number = 0; number <= n; number++)
		{
			int r;

			r = table * number;
			if (number && r < 10)
				print_spaces(3);
			else if (r >= 10 && r < 100)
				print_spaces(2);
			else if (r >= 100)
				print_spaces(1);
			if (r >= 10 && r < 100)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else if (r >= 100)
			{
				_putchar((r / 100) + '0');
				_putchar(((r / 10) % 10) + '0');
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
