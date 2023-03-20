#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialises a dog using the dog struct in header
 * @d: pointer to where dog is stored
 * @name: string of name of dog
 * @age: float of age of dog
 * @owner: owner of the dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
