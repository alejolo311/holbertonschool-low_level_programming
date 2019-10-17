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
/**
 * _calloc - allocate memory and set in 0.
(* a blank line
 *@nmemb:the size of the data type
 *@size: number of btyes to be alocated
* Description: copy a string)?
(* section header: the header of this function is holberton.h)*
* Return: no return only allocate memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));

	return (p);
}
