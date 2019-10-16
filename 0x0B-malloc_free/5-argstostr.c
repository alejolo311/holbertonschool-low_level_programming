#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - this function concatenates the arguments
(* a blank line
 *@ac: args count
 *@av: args vector
* Description: this function concatenates the argument)?
(* section header: the header of this function is holberton.h)*
* Return: this function return a char pointer to the concatenate arguments.
*/
char *argstostr(int ac, char **av)
{
	char *p, *q;
	int i, j, result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, result = 0; i < ac; i++, result++)
	{
		while (*(*(av + i) + j) != '\0')
		{
			j++;
			result++;
		}
	}
	result++;
	p = malloc(result * sizeof(char));
	if (p == NULL)
		return (NULL);
	q = p;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*p = av[i][j];
			p++;
		}
		*p = '\n';
		p++;
	}
	return (q);
}
