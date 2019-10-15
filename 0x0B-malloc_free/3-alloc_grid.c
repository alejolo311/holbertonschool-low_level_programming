#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - this function concatante two strings to a new memory position
(* a blank line
 *@s1: the string dest
 *@s2: the string source
* Description: this function concatena two strings)?
(* section header: the header of this function is holberton.h)*
* Return: this return a char pointer to the string.
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	i = 0;
	if (width <= 0 || height <= 0 || width + height <= 1)
		return (NULL);
	p = malloc(height * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		*(p + i) = malloc(width * sizeof(int));
		if (*(p + i) == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
		i++;
	}

	return (p);
}
