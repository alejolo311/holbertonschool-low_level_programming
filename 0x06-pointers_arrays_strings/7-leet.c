#include "holberton.h"
/**
 * leet - mozart do the music for allte people
(* a blank line
 *@a: this parameter is the string to encrypt
* Description: mozart)?
(* section header: the header of this function is holberton.h)*
* Return: this return a char.
*/
char *leet(char *a)
{
	int j;

	for (j = 0; a[j] != '\0'; j++)
	{
		while (a[j] == 'a' || a[j] == 'A')
		{
			a[j] = '4';
		}
		while (a[j] == 'e' || a[j] == 'E')
		{
			a[j] = '3';
		}
		while (a[j] == 'o' || a[j] == 'O')
		{
			a[j] = '0';
		}
		while (a[j] == 't' || a[j] == 'T')
		{
			a[j] = '7';
		}
		while (a[j] == 'l' || a[j] == 'L')
		{
			a[j] = '1';
		}
	}

	return (a);
}
