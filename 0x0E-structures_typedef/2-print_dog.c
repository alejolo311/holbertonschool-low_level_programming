#include "dog.h"
/**
 * print_dog - this function print a dog.
 * @d: the struct of the dog
 (* a blank line
* Description: this function print a dog)?
(* section header: the header of this function is dog.h)*
* Return: a void function no return.
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
	else
		return;
}
