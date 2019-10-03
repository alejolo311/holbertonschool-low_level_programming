#include "holberton.h"
/**
 * _strcmp - this function compare two strings
 * @s1: the first string
 * @s2: the second string
 (* a blank line
* Description: this function comparing two strings using the first value)?
(* section header: the header of this function is holberton.h)*
* Return: return a number depends os the resul fo comparation.
*/
int _strcmp(char *s1, char *s2)
{
	int j;

	for (j = 0; s1[j] != '\0' || s2[j] != '\0'; j++)
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
	}
	return (0);
}
