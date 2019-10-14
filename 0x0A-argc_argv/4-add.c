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
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}

		result += _atoi(argv[i]);

	}

	printf("%d\n", result);

	return (0);
}
/**
 * _atoi - this function converts a string to integer
(* a blank line
*@s: the string for convert to integer
* Description: this funtion converts a string to integer)?
(* section header: the header of this function is holberton.h)*
* Return: this funtion returns the result
*/
int _atoi(char *s)
{
	int counter, sign;
	unsigned int number;

	sign = 1;
	counter = 0;
	number = 0;


	while ((s[counter] < '0' || s[counter] > '9') && (s[counter] != '\0'))
	{
		if (s[counter] == '-')
			sign *= -1;
		counter++;
	}
	while ((s[counter] >= '0') && (s[counter] <= '9'))
	{
		number = number * 10 + (s[counter] - '0');
		counter++;
	}
	return (number * sign);
}
