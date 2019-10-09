#include "holberton.h"
/**
 * factorial - this functions prints the factorial of a number
(* a blank line
 *@n: this variable is a int , contains the number to be factorized
* Description: this function prints the factorial of a number?
(* section header: the header of this function is holberton.h)*
* Return: retunrn the factorial in int
*/
int factorial(int n)
{
	if (n > 1)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (0);
}
