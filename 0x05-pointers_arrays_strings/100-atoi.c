#include "holberton.h"
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
