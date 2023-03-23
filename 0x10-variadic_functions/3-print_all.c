#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_cases - prints case by case for each output
 * @format: string of format specifiers
 * @args: array of arguments
 * @k: length of format string
 *
 * Return: Nothing
 */
void print_cases(const char *const format, va_list args, int k)
{
	int i, j;
	char *temp;

	i = 0, j = 0;

	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			j = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			j = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			j = 1;
			break;
		case 's':
			temp = va_arg(args, char *);
			j = 1;
			if (temp)
			{
				printf("%s", temp);
				break;
			}
			printf("(nil)");
			break;
		default:
			j = 0;
		}
		if (format[i + 1] != '\0' && (j || k) && (format[i + 1] == 'c' ||
			format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
			printf(" ,");
		j = 0, i++, k--;
	}
	printf("\n");
}

/**
 * print_all - prints anything provided to it
 * @format: list of types of args passed
 * @...: variable number of input arguments
 *
 * Descrition: prints all provided args based on the types in @format
 * Return: Nothing
 */
void print_all(const char *const format, ...)
{
	int i, len;
	va_list args;

	len = 0, i = 0;

	if (format == NULL)
		return;
	va_start(args, format);
	while (format[i] != '\0')
	{
		len++, i++;
	}
	print_cases(format, args, len);
	va_end(args);
}
