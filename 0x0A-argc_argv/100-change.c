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
	int cent, in;

	cent = 0;
	in = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	in = _atoi(argv[1]);
	while (in > 0)
	{
		if (in - 25 >= 0)
			in = in - 25;
		else if (in - 10 >= 0)
			in = in - 10;
		else if (in - 5 >= 0)
			in = in - 5;
		else if (in - 2 >= 0)
			in = in - 2;
		else if (in - 1 >= 0)
			in = in - 1;
		cent++;
	}
	printf("%d\n", cent);
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
