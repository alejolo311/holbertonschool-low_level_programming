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
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, k, l;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	i = 0, j = 0;
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + j) != '\0')
		j++;

	p = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (p == NULL)
		return (NULL);

	for (l = 0, k = 0; l < (i + j + 1); l++)
	{
		if (l < i)
			*(p + l) = *(s1 + l);
		else
			*(p + l) = *(s2 + (k++));
	}

	return (p);
}
