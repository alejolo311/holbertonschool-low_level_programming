#include "holberton.h"
/**
 * _memcpy - this function cpy a buffer
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
/**
 * _realloc - reallocate memory
(* a blank line
 *@ptr:the space in memory to realloc
 *@old_size: the previous size.
 *@new_size: the new size of the memory
* Description: reallocate memory)?
(* section header: the header of this function is holberton.h)*
* Return: no return.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
