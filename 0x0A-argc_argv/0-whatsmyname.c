#include <stdio.h>
/**
 * main - this program prints the argv[0]
(* a blank line
*@argc: this is the quantity of parameters
*@argv: the parameter to put in the pogram.
* Description: this program prints the argv[0])?
* Return: return 0 or 1
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
