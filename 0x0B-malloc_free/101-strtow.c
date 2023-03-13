#include "main.h"
#include <stdlib.h>

/**
 * wc - counts the words in the string
 * @str: given string
 *
 * Return: integer of how many strings there are
 */
int wc(char *str)
{
	int i, j, words;

	words = 0, j = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			j = 0;
		else if (j == 0)
		{
			j = 1;
			words += 1;
		}
		i++;
	}
	return (words);
}


/**
* strtow - convert a string into words
* @str: given string with words separated by spaces
*
* Return: a pointer to string or
*	NULL if failed(str is NULL or str is "" or malloc fail)
*/

char **strtow(char *str)
{
	int i, j, k, l, m, len;
	char **arr, *tempstr;

	j = 0, k = 0, l = 0, m = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = wc(str);

	if (len == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (len + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		while (str[k] == ' ' && str[k] != '\0')
			l++, k++;
		while (str[k] != ' ' && str[k] != '\0')
			k++, m++;
		tempstr = malloc(sizeof(char) * (m + 1));
		if (tempstr == NULL)
			return (NULL);
		for (j = 0; j < m; j++)
		{
			tempstr[j] = str[l];
			l++;
		}
		l = k;
		tempstr[m] = '\0';
		m = 0;
		arr[i] = tempstr;
	}
	arr[len] = NULL;
	return (arr);
}
