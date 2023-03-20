#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints out the information of the dog
 * @d: pointer to the structure holding the information
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
