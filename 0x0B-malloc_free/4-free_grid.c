#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - this function free a grid.
(* a blank line
 *@grid: the grid to free
 *@height: the height of the grid to free
* Description: this function free a grid)?
(* section header: the header of this function is holberton.h)*
* Return: this function no return.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
