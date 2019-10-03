#include "holberton.h"
/**
 * rot13 - this functions encrypt using the rot13 algorithm
(* a blank line
 *@a: this parameter is the string to encrypt
* Description: this function encrypts using the rot13 algorithm)?
(* section header: the header of this function is holberton.h)*
* Return: this return a char.
*/
har *rot13(char *a)
{
	int j;
	char charsupp[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char charslow[] = "nopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
	{
		if ((a[j] >= 'A' && a[j] < 'Z') || (a[j] >= 'a' && a[j] < 'z'))
		{
			a[j] = (a[j] - 65 > 25) ?
				charslow[s[i] - 97] : charsupp[s[i] - 65];
		}
	}
	return (s);
}
