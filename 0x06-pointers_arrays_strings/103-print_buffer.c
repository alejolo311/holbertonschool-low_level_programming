#include "holberton.h"
/**
 * print_buffer - this functions prints a buffer
(* a blank line
 *@b: this is  size buffer pinted
 *@size: this is the size of the buffer
* Description: this function prints a buffer)?
(* section header: the header of this function is holberton.h)*
* Return: this funtion no return
*/
void print_buffer(char *b, int size)
{
	int i, j, k;



	if (size <= 0)
		printf("\n");
	else
	{
		i = 0;
		while (i < size)
		{
			printf("%08x: ", i);
			j = 0;
			while (j < 10)
			{
				if (j != 0 && j % 2 == 0)
					printf(" ");
				if ((j + i) > size - 1)
				{
					printf("  ");
				}
				else
					printf("%.2x", b[i + j]);
				j++;
			}
			printf(" ");
			k = 0;
			while (k < 10)
			{
				if ((k + i) > size - 1)
					break;
				if (b[k + i] <= 31 || b[k + 1] >= '~')
					b[k + i] = '.';
				printf("%c", b[k + i]);
				k++;
			}
			i = i + 10;
			printf("\n");
		}
	}
}
