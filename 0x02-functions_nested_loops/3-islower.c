#include "holberton.h"
/**
 * _islower - This functions says if a characters is lowercase
(* a blank line
 * Description: this function detect if a charecter is lower or note)?
(* section header: the header file for this function is holberton.h)*
 * Return: this funcion return 1 if the value is lower, return 0 in other cases.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
