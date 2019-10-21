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
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
