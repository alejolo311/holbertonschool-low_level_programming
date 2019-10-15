#include "holberton.h"
#include <stdlib.h>
/**
 * _create_array - this functions create an array.
(* a blank line
 *@size: this is the size of the array.
 *@c: the value to inite the array.
* Description: this function prints a string)?
(* section header: the header of this function is holberton.h)*
* Return: this is a void function no return
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(*p));

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
