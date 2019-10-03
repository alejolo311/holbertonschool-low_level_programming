#include "holberton.h"
/**
 * _strncat - this function concatenate two strings
 * @dest: the first string to be concatenated
 * @src: the second string to be concatenated
 * @n: the number of bytes to concatenate
(* a blank line
* Description: this function concatenate strings using n as number of bytes)?
(* section header: the header of this function is holberton.h)*
* Return: return the final result of the string in char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		j < n ? dest[i] = src[j] : j;
	}


	return (dest);
}
