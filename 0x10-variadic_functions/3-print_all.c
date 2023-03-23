#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_cases - prints case by case for each output
 * @format: character delinieating format at that point
 * @args: array of arguments
 * @j: integer which returns 0 if a valid match is found
 *
 * Return: j
 */
int print_cases(const format, va_list args, int j)
{
	char *temp;
	switch (format)
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
		break;
	}
	return (j);
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
	int i, j, k;
	va_list args;
	i = 0, j = 0, k = 0;

	if (format == NULL)
		return;
	va_start(args, format);
	while (format[i] != '\0')
	{
		k++, i++;
	}
	i = 0;

	while (format[i] != '\0')
	{
		j = print_cases(format[i], args, j);
		if (format[i + 1] != '\0' && (j || k) && (format[i + 1] == 'c' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's'))
			printf(" ,");
		j = 0, i++, k--;
	}
	printf("\n");
	va_end(args);
}
