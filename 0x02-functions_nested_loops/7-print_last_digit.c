#include "main.h"

/**
 * print_last_digit - prints and returnsbthe value of the last digit of an int
 * @n: integer being checked out
 *
 * Return: On success, return last digit @last.
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last >= 0)
		_putchar('0' + last);
	else
	{
		_putchar('-');
		_putchar('0' + (last * -1));
	}
	return (last);
}
