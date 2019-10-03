#include "holberton.h"
/**
 * leet - mozart do the music for allte people
(* a blank line
 *@s: this parameter is the string to encrypt
* Description: mozart do the music for all the people)?
(* section header: the header of this function is holberton.h)*
* Return: this return a char.
*/
char *leet(char *s)
{
	int i, j;
	char chars[] = "aAeEoOtTlL";
	char encrypt[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; encrypt[j] != '\0'; j++)
		{
			if (s[i] == chars[j])
			{
				s[i] = encrypt[j];
			}
		}
		i++;
	}
	return (s);
}
