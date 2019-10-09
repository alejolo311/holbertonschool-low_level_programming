#include "holberton.h"
/**
 * _strlen_recursion - this functions prints the lenght of a string
 (* a blank line
 *@s: string to print.
 * Description: this function prints the lenght of a string?
 (* section header: the header of this function is holberton.h)*
 * Return: retunrn the lenght in int
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);
}
/**
 * is_palindrome - this functions says if a string is a palindrome
 (* a blank line
 *@s: string to verify.
 * Description: this function prints is a strign is palindrome?
 (* section header: the header of this function is holberton.h)*
 * Return: retunrn 1 or 0
*/
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l > 1)
		return (real_checker_palindrome(s, l));
	return (1);
}

/**
 * real_checker_palindrome - in this place is where the magic happens.
(* a blank line
*@s: the string.
*@l: is the len of the string
* Description: this is the real function?
(* section header: the header of this function is holberton.h)*
* Return: return 0 or 1;
*/
int real_checker_palindrome(char *s, int l)
{
	if (l <= 1)
		return (1);
	else if (*s == *(s + l - 1))
	{
		return (real_checker_palindrome(s + 1, l - 2));
	}
	else
		return (0);

}
