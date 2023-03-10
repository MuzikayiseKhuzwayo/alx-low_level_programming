#include "main.h"

/**
* _strspn - find index of first non matching char in @s
* with reference to @accept
* @s: buffer;
* @accept: chars to be checked for
*
* Return: index of first non match (success)
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, f, j;
	unsigned int cnt;

	cnt = 0;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				cnt++;
				f = 1;
				break;
			}
		}
		if (f != 0)
			f = 0;
		else
			break;
	}
	return (cnt);
}

