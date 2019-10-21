#ifndef DOGHEADER
#define DOGHEADER
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - this is a structure of a dog.
 * @name: the name of the dog
 * @age: the name of the dog
 * @owner: the owner of the dog
 *
 * Description: this structure defines some characteristics that a dog has.
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
/**
 * dog_t - typedef for dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
