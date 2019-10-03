#include "holberton.h"
/**
 * leet - mozart
(* a blank line
 *@s: this parameter is the string to encrypt
* Description: mozart)?
(* section header: the header of this function is holberton.h)*
* Return: this return a char.
*/
char *leet(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		while (s[j] == 'a' || s[j] == 'A')
		{
			s[j] = '4';
		}
		while (s[j] == 'e' || s[j] == 'E')
		{
			s[j] = '3';
		}
		while (s[j] == 'o' || s[j] == 'O')
		{
			s[j] = '0';
		}
		while (s[j] == 't' || s[j] == 'T')
		{
			s[j] = '7';
		}
		while (s[j] == 'l' || s[j] == 'L')
		{
			s[j] = '1';
		}
	}

	return (s);
}
