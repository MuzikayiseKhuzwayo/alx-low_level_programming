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
	if (d == NULL)
		exit();
	char *noelement = "(nil)";
	printf("Name: %s\n", (d->name == NULL) ? noelement : d->name);
	printf("Age: %.6f\n", (d->age == NULL) ? noelement : d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? noelement : d->owner);
}
