#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by newline
 * @separator: string to be printed between nums
 * @n: number of integers passed to function
 * @...: variable number of inputs given as integers
 *
 * Description: prints @n given numbers separated by @separator
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		return;
	if (n < 1)
		printf("\n");

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
