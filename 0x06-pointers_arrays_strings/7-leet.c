#include "main.h"

/**
 * leet - encodes strings into 1337
 * @s: string being augmented
 *
 * Return: pointer to char string
 */

char *leet(char *s)
{
	int i, j;
	char alpha[] = "aAeElLoOtT";

	char leet[] = "4433110077";

	for (i = 0; (*(s + i) != '\0'); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = leet[j];
			}
		}
	}
	return (s);
}
