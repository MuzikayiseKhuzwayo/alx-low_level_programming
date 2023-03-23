#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string that will separate every arg
 * @n: number of given arguments
 * @...: variable number of input arguments
 *
 * Description: prints @n number of strings separated by @separator
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (temp)
			printf("%s", temp);
		if (temp == NULL)
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
