#include "holberton.h"
/**
 * array_range - create an array of intes
(* a blank line
 *@min:the minimun int
 *@max: the max int
* Description: create an array of ints)?
(* section header: the header of this function is holberton.h)*
* Return: a pointer to a int array.
*/
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min;
	p = malloc((j + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < j + 1; min++, i++)
	{
		*(p + i) = min;
	}
	return (p);
}
