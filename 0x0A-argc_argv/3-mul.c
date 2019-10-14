#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - this program multuply two numbers
(* a blank line
*@argc: this is the quantity of parameters
*@argv: the parameter to put in the program.
* Description: this program multuply two numbers)?
* Return: return 0 or 1
 */
int main(int argc, char *argv[])
{
	int result;

	(void) argc;

	if (argv[1] && argv[2])
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
		printf("Error\n");

	return (1);
}
