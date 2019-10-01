#include "holberton.h"
/**
 * swap_int - this function swap the values of two variables
(* a blank line
 *@a: this parameters is a pointer to the fisrt variable in main.
 *@b: this parameter is a pointer to the second variable in main
* Description: this function swap the values of twovariables)?
(* section header: the header of this function is holberton.h)*
* Return: a void function, no return
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
