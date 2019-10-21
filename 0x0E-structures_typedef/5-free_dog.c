#include "dog.h"
/**
 * free_dog - this function free a dog
 * @d: the dog to be free
(* a blank line
* Description: this function free a dog)?
(* section header: the header of this function is dog.h)*
* Return: a void function, no returns.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}

}
