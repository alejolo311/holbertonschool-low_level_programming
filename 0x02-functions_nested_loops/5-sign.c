#include "holberton.h"
/**
 * print_sign - This functions prints the symbols of some numbers
(* a blank line
 * Description: this function print the symbol of some numbers)?
(* section header: the header file for this function is holberton.h)*
 * Return: return  value can be 1, 0, -1
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
