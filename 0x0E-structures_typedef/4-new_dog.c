#include "dog.h"
#include <stdlib.h>

/**
 * cpystr - copies string from the src to destination
 * @src: src string
 * @dest: destination string
 */
void cpystr(char *src, char *dest)
{
	int i, j;

	i = strlength(src);
	for (j = 0; j <= i; j++)
	{
		if (j < i)
			dest[j] = src[j];
		else
			dest[j] = '\0';
	}
}

/**
 * strlength - gives length of a string
 * @str: given string
 *
 * Return: integer length
 */
int strlength(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
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
	i = strlength(name), j = strlength(owner);

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);
	newname = malloc(sizeof(char) * (i + 1));
	if (newname == NULL)
	{
		free(doge);
		return (NULL);
	}
	newowner = malloc(sizeof(char) * (j + 1));
	if (newowner == NULL)
	{
		free(newname);
		free(doge);
		return (NULL);
	}
	cpystr(name, newname);
	cpystr(owner, newowner);

	doge->name = newname;
	doge->age = age;
	doge->owner = owner;

	return (doge);
}
