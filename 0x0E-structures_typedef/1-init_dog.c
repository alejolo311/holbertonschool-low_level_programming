#include "dog.h"
/**
 * init_dog - this function init a dog.
 * @d: the struct of the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
(* a blank line
* Description: this function init a dog)?
(* section header: the header of this function is dog.h)*
* Return: a void function no return.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
