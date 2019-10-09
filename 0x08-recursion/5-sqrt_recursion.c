#include "holberton.h"
/**
 * _sqrt_recursion - this functions prints the square root of a number
(* a blank line
 *@n: this variable is a int , contains the number to obtains his square root
* Description: this function prints the square root of a number?
(* section header: the header of this function is holberton.h)*
* Return: return the square root in int
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (real_sqrt(n, 1));
}
/**
 * real_sqrt - this functions is the real
(* a blank line
*@n: the number to obtains his square root.
*@i: this variable is the result.
* Description: this function return the square root?
(* section header: the header of this function is holberton.h)*
* Return: return the square root;
*/
int real_sqrt(int n, int i)
{
	if (n > (i * i))
		return (real_sqrt(n, i + 1));
	else if (n == (i * i))
		return (i);
	else
		return (-1);
}
