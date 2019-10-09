#include "holberton.h"
/**
 * wildcmp - this functions compare two strings
(* a blank line
 *@s1: this variable is the fisrts string
 *@s2: the second string
* Description: this function compare two strings?
(* section header: the header of this function is holberton.h)*
* Return: return 0 or 1;
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) != '\0' && *s2 == '\0')
		return (0);
	return (0);
}
