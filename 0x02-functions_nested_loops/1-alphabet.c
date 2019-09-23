#include "holberton.h"
/**
 * print_alphabet - This functions print the alphabet in lower case
(* a blank line
 * Description: this function use a for to print the alphabet in lower case)?
(* section header: the header file for this function is holberton.h)*
 * Return: this funcion dont have a return value
 */
void print_alphabet(void)
{
	int i
;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
