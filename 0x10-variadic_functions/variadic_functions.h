#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print_case - a structure that holds id and function
 * @id: identifier character
 * @print_case: function which handles case
 *
 * typedef print_case_t : type for printcase structure
 */
typedef struct print_case
{
	char id;
	void (*print_case)(va_list *arg);
} print_case_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

#endif
