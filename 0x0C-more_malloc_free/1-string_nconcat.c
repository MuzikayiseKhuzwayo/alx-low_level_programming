#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - concatenates two strings
* @s1: string to add to
* @s2: string to put after @s1 inconcatenates string
* @n: number of chars to concat from @s2
*
* Return: new string if passed, NULL if failed
*/

void *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *newstr;

	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = (int)strlen(s1);
	len2 = (int)strlen(s2);
	if (n > len2)
		n = len2;

	newstr = malloc(sizeof(char) * (len1 + n + 1));

	if (newstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		newstr[j] = s1[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		newstr[j] = s2[i];
		j++;
	}
	newstr[j] = '\0';

	return (newstr);
}
