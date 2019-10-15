#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - this function allocates a grid.
(* a blank line
 *@width: the width of the grid
 *@height: the height of the grid
* Description: this function allocates a grid)?
(* section header: the header of this function is holberton.h)*
* Return: this return a int pointer to a two dimesional array.
*/
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	i = 0;
	if (width <= 0 || height <= 0 || (width == 1 && height == 1))
		return (NULL);
	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);
	while (i < height)
	{
		p[i] = malloc(width * sizeof(**p));
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
		i++;
	}

	return (p);
}
