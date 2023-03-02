#include "main.h"

/**
 * rot13 - implements rot13 with one if statement and 2 loops
 * @s: string being augmented
 *
 * Return: pointer to char string
 */

char *rot13(char *s)
{
	int i, j;
	char rot1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; (*(s + i) != '\0'); i++)
	{
		for (j = 0; j < 52; j++)
		{

			if (s[i] == rot1[j])
			{
				s[i] = rot2[j];
				break;
			}
		}
	}
	return (s);
}
