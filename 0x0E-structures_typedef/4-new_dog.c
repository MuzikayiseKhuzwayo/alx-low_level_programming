#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gives length of a string
 * @str: given string
 *
 * Return: integer length
 */
int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * cpystr - copies string from the src to destination
 * @src: src string
 * @dest: destination string
 *
 * Return: pointer to the copied string
 */
char *cpystr(char *src, char *dest)
{
	int i, j;

	i = _strlen(src);
	for (j = 0; j <= i; j++)
	{
		if (j < i)
			dest[j] = src[j];
		else
			dest[j] = '\0';
	}
	return (dest);
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
	int i, j;
	dog_t *doge;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	i = _strlen(name), j = _strlen(owner);

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);
	doge->name = malloc(sizeof(char) * (i + 1));
	if (doge->name == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->owner = malloc(sizeof(char) * (j + 1));
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}

	doge->name = cpystr(name, doge->name);
	doge->age = age;
	doge->owner = cpystr(owner, doge->owner);

	return (doge);
}
