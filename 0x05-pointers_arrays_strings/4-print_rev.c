#include "holberton.h"
/**
 * print_rev - this function prints a str in rev
(* a blank line
 *@s: this parameter is the str
* Description: this funtion prints a str in rev)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void funtion no return.
*/
void print_rev(char *s)
{
	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	while (s[size] >= 0)
	{
		_putchar(s[size]);
		size--;
		if (size < 0)
			_putchar('\n');
	}

	_putchar('\n');
}
