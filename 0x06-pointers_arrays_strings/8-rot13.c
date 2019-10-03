#include "holberton.h"
/**
 * rot13 - this functions encrypt using the rot13 algorithm
(* a blank line
 *@a: this parameter is the string to encrypt
* Description: this function encrypts using the rot13 algorithm)?
(* section header: the header of this function is holberton.h)*
* Return: this return a char.
*/
char *rot13(char *a)
{
	int j;

	for (j = 0; a[j] != '\0'; j++)
	{
		if ((a[j] >= 'a' && a[j] <= 'm') || (a[j] >= 'A' && a[j] <= 'M'))
		{
			a[j] = (a[j] + 13);
		}
		else
			while ((a[j] >= 'n' && a[j] <= 'z') ||
			       (a[j] >= 'N' && a[j] <= 'Z'))
			{
				a[j] = (a[j] - 13);
			}
	}
	return (a);
}
