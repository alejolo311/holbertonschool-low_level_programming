#include "holberton.h"
/**
 * malloc_checked - allocate memory an checks.
(* a blank line
 *@b: bits to allocate
* Description: allocates memory)?
(* section header: the header of this function is holberton.h)*
* Return: this is void, no return.
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
