#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a dog by coying name and owner
 * @name: string holding the name of the dog
 * @age: float var holding the age
 * @owner: string var holding the name of owner
 *
 * Return: pointer to dog if success, NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *newname, *newowner;
	int i, j, k;
	dog_t *doge;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	i = 0, j = 0;

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	newname = malloc(sizeof(char) * (i + 1));
	newowner = malloc(sizeof(char) * (j + 1));
	if (newname == NULL)
		return (NULL);
	if (newowner == NULL)
		return (NULL);
	for (k = 0; k <= i; k++)
	{
		if (k < i)
			newname[k] = name[k];
		else
			newname[k] = '\0';
	}
	for (k = 0; k <= j; k++)
	{
		if (k < i)
			newowner[k] = owner[k];
		else
			newowner[k] = '\0';
	}
	doge->name = newname;
	doge->age = age;
	doge->owner = owner;

	return (doge);
}
