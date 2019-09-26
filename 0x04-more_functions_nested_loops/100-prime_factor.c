#include "holberton.h"
#include <stdio.h>
/**
 * main - entry point
(* a blank line
* Description: this function prints a the prime factorization?
* Return: a void function, no return
 */
int main(void)
{
	int i;
	long int j;

	j = 612852475143;

	i = 2;
	while( j != 1)
	{
		if (j % i == 0)
		{
			while ( j % i == 0)
			{
				j = j / i;
			}
		}
		i++;
	}
	printf("%d\n", i);
	return (0);
}
