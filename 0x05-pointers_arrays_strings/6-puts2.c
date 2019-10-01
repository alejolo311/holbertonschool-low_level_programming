#include "holberton.h"
/**
 * puts2 - this function prints a str only the even lines
(* a blank line
 *@str: this parameter is the str
* Description: this funtion prints a str only the even lines)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void funtion no return.
*/
void puts2(char *str)
{
	int size;

	size = 0;

	while (str[size] != '\0')
	{
		if (size % 2 == 0)
		{
		_putchar(str[size]);
		}
		size++;
	}
	_putchar('\n');
}
