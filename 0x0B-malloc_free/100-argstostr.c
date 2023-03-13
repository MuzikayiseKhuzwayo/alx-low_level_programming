#include "main.h"
#include <stdlib.h>

/**
* argstostr - convert all arguments to concatenated string
* @ac: argument count
* @av: array of strings, argument values
*
* Return: a string or NULL if failed(ac is 0/ av is NULL)
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	len = ac, k = 0;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
