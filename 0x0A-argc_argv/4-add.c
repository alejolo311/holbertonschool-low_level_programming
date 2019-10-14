#include "holberton.h"
#include <stdio.h>

/**
 * main - this program adds two numbers
(* a blank line
*@argc: this is the quantity of parameters
*@argv: the parameter to put in the program.
* Description: this program adds two numbers)?
* Return: return 0 or 1
 */
int main(int argc, char *argv[])
{
	int i, j;
	int result;

	result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' && argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}

		}

		sum += atoi(argv[i]);

	}

	printf("%d\n", result);

	return (0);
}
