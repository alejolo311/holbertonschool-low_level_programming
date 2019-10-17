#include "holberton.h"
/**
 * string_nconcat - copy a string.
(* a blank line
 *@s1: the first string
 *@s2: the second string
 *@n: the number of bytes
* Description: copy a string)?
(* section header: the header of this function is holberton.h)*
* Return: returns a pointer to a char..
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, l;


	i = 0, l = 0;
	s1 == NULL ? s1 = "" : s1;
	s1 == NULL ? s2 = "" : s2;
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + l) != '\0')
		l++;

	if (n >= l)
		n = l;
	p = malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (j = 0; *(s1 + j) != '\0'; j++)
		*(p + j ) = *(s1 + j);
	for (k = 0; *(s2 + k) != '\0' && k < n; k++, j++)
		*(p + j) = *(s2 + k);
	p[j] = '\0';

	return (p);
}
