#include "holberton.h"
/**
 * print_last_digit - This functions prints the lasgt digit of a integer
 * @c: this parameter is a integer.
(* a blank line
 * Description: this function print the last digite of a integer)?
(* section header: the header file for this function is holberton.h)*
 * Return: return  the last digit of the input
 */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;
	if (c < 0)
	{
		last_digit = last_digit * -1;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
