#include "dog.h"
/**
 * new_dog - this function create a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
(* a blank line
* Description: this function create a dog)?
(* section header: the header of this function is dog.h)*
* Return: this function returns a struct of a dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i,j;
	char *p, *q;

	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	i = _strlen(name);
	j = _strlen(owner);

	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	q = malloc(sizeof(char) * j + 1);
	if (q == NULL)
	{
		free(new_dog);
		free(p);
		return (NULL);
	}
	_memcpy(p, name, i);
	_memcpy(q, owner, j);

	new_dog->name = p;
	new_dog->age = age;
	new_dog->owner = q;

	return (new_dog);
}
/**
 * _strlen_recursion - this functions prints the lenght of a string
(* a blank line
*@s: string to print.
* Description: this function prints the lenght of a string?
(* section header: the header of this function is dog.h)*
* Return: retunrn the lenght in int
*/
int _strlen(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _strlen(s));
	}
	else
		return (0);
}
/**
 * _memcpy - this function cpy a buffer
 * @dest: is a buffer that it contains in array
 * @src: the new value to copy in the buffer
 * @n: the number of bytes to be altered.
(* a blank line
* Description: this function set memory)?
(* section header: the header of this function is holberton.h)*
* Return: return char
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{

		dest[i] = src[i];
	}

	return (dest);
}
