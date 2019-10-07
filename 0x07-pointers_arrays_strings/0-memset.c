#include "holberton.h"
/**
 * _memset - this function set memory
 * @s: s is a buffer that it contains in array
 * @b: the new value to set in the buffer
 * @n: the number of bytes to be altered.
(* a blank line
* Description: this function set memory)?
(* section header: the header of this function is holberton.h)*
* Return: return char
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
