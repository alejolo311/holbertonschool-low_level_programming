#include "holberton.h"
/**
 * _strncpy - this function copy a string
 * @dest: the string destintation
 * @src: the string source to copy
 * @n: the number of bytes to copy
(* a blank line
* Description: this function copy strings using n as number of bytes)?
(* section header: the header of this function is holberton.h)*
* Return: return the final result of the string in char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		j < n ? dest[j] = src[j] : j;
	}
	while (n > j)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
