#include "holberton.h"
/**
 * print_chessboard - this function prints a chessboard
 * @a: this is the array
 (* a blank line
* Description: this prints a cheesboard)?
(* section header: the header of this function is holberton.h)*
* Return: no return
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			j == 7 ? _putchar('\n') : j;
		}
	}
}
