#include "holberton.h"
/**
 * _puts - this function prints a str
(* a blank line
 *@str: this parameter is the str
* Description: this funtion prints a str)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void funtion no return.
*/
void _puts(char *str)
{
	int size;

	size = 0;

	while (str[size] != '\0')
	{
		_putchar(str[size]);
		size++;
	}
	_putchar('\n');
}
