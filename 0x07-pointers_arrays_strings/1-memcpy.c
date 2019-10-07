#include "holberton.h"
/**
 * _memset - this function cpy a buffer
 * @dest: is a buffer that it contains in array
 * @src: the new value to copy in the buffer
 * @n: the number of bytes to be altered.
(* a blank line
* Description: this function set memory)?
(* section header: the header of this function is holberton.h)*
* Return: return char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{

		dest[i] = src[i];
	}

	return (dest);
}
