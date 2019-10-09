#include "holberton.h"
/**
 * _pow_recursion - this functions prints the factorial of a number
(* a blank line
 *@s1: this variable is the number to be pow
 *@s2: the pow
* Description: this function prints the factorial of a number?
(* section header: the header of this function is holberton.h)*
* Return: retunrn the factorial in int
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
