#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - This functions prints numbers to 98
 * @c: the paramater to print and go to 98
(* a blank line
 * Description: this function print numbers to 98)?
(* section header: the header file for this function is holberton.h)*
 * Return: this is a void function, dont have return.
 */
void  print_to_98(int c)
{
	if (c > 98)
	{
		while (c >= 98)
		{
			printf("%i", c);
			if (c != 98)
			{
				printf(", ");
			}
			c--;
		}
	}
	else
	{
		while (c <= 98)
		{
			printf("%i", c);
			if (c != 98)
			{
				printf(", ");
			}
			c++;
		}
	}
	printf("\n");
}
