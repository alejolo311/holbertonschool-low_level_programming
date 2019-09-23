#include "holberton.h"
/**
 * jack_bauer - This functions prints the longest day of jack baur
(* a blank line
 * Description: this function print the longest day of jack bauer)?
(* section header: the header file for this function is holberton.h)*
 * Return: no return a void function.
 */
void  jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
