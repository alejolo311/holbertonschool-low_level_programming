#include "holberton.h"
/**
 * is_prime_number - this function verify if number is prime
(* a blank line
 *@n: the number
* Description: this function verify if a number is primer?
(* section header: the header of this function is holberton.h)*
* Return: return 1 or 0
*/
int is_prime_number(int n)
{
	return (real_is_prime(n, 2));
}
/**
 * real_is_prime - this is the real function
(* a blank line
*@n: the number to verify.
*@i: the number to divide.
* Description: this verify if a number is prime?
(* section header: the header of this function is holberton.h)*
* Return: return 1 or 0;
*/
int real_is_prime(int n, int i)
{

	if ((n % i == 0 && i <= n / 2) || n <= 1)
		return (0);
	else if (n % i != 0 && i <= n / 2)
		return (real_is_prime(n, i + 1));
	else
		return (1);
}
