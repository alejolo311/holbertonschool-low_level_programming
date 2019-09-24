#include "holberton.h"
/**
 * _abs - This functions prints the absolute value of a integer
 * @c: this parameter is a integer.
(* a blank line
 * Description: this function print the absolute value of a integer)?
(* section header: the header file for this function is holberton.h)*
 * Return: return  the absolute value of a integer
 */
int _abs(int c)
{
	if (c < 0)
	{
		int r;

		r = c * -1;
		return (r);
	}
	else
	{
		return (c);
	}
}
