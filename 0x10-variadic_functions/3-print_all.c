#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_case_char - prints case for format of c
 * @arg: list of arguments
 *
 * Return: Nothing
 */
void print_case_char(va_list *arg)
{
	char c;

	c = va_arg(*arg, int);
	printf("%c", c);
}

/**
 * print_case_int - prints case for format of i
 * @arg: list of arguments
 *
 * Return: Nothing
 */
void print_case_int(va_list *arg)
{
	int num;

	num = va_arg(*arg, int);
	printf("%d", num);
}

/**
 * print_case_float - prints case for format of f
 * @arg: list of arguments
 *
 * Return: Nothing
 */
void print_case_float(va_list *arg)
{
	double fl;

	fl = va_arg(*arg, double);
	printf("%f", fl);
}

/**
 * print_case_str - prints case for format of s
 * @arg: list of arguments
 *
 * Return: Nothing
 */
void print_case_str(va_list *arg)
{
	char *temp;

	temp = va_arg(*arg, char *);
	if (temp == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", temp);
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
	int i = 0, j = 0;
	va_list args;
	char *separator = "";
	print_case_t cases[] = {
		{'c', print_case_char},
		{'i', print_case_int},
		{'f', print_case_float},
		{'s', print_case_str},
		{0, NULL},
	};

	va_start(args, format);
	while (format[i] != '\0' && format != NULL)
	{
		while (cases[j].id != format[i] && cases[j].id)
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			cases[j].print_case(&args);
			separator = ", ";
		}
		j = 0, i++;
	}
	printf("\n");
	va_end(args);
}
