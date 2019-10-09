#include "holberton.h"
/**
 * _pow_recursion - this functions prints the factorial of a number
(* a blank line
 *@x: this variable is the number to be pow
 *@y: the pow
* Description: this function prints the factorial of a number?
(* section header: the header of this function is holberton.h)*
* Return: retunrn the factorial in int
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
