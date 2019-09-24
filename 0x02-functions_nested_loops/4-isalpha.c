#include "holberton.h"
/**
 * _isalpha - This functions says if a characters is alpha
 * @c: this parameters is a integer
(* a blank line
 * Description: this function detect if a charecter is alpha)?
(* section header: the header file for this function is holberton.h)*
 * Return: return 1 if the value is lower or alpha, return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
