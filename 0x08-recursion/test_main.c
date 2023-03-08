#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * All code adapted from the assignment descriptions
 * Used to test cases. Very useful
 */

/**
 * print_array - prints an array for main
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    	int i;

    	i = 0;
    	while (i < n)
    	{
        	if (i != 0)
       		{
            		printf(", ");
        	}
        	printf("%d", a[i]);
        	i++;
    	}
    	printf("\n");
}

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	/*
	_puts_recursion("Puts with recursion");
	*/
	/*
	_print_rev_recursion("\nColton Walker");
	*/
	/*
	int n;

	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);
	*/
	/*
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	*/
	/*
	int r;

	r = _pow_recursion(1, 10);
	printf("%d\n", r);
	r = _pow_recursion(1024, 0);
	printf("%d\n", r);
	r = _pow_recursion(2, 16);
	printf("%d\n", r);
	r = _pow_recursion(5, 2);
	printf("%d\n", r);
	r = _pow_recursion(5, -2);
	printf("%d\n", r);
	r = _pow_recursion(-5, 3);
	printf("%d\n", r);
	*/
	/*
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	*/
	/*
	int r;

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(25);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	*/
	/*
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	*/

	int r;

	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*a*i*n*.*c*");
	printf("%d\n", r);
	r = wildcmp("main.c", "main.c");
	printf("%d\n", r);
	r = wildcmp("main.c", "m*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "ma********************************c");
	printf("%d\n", r);
	r = wildcmp("main.c", "*");
	printf("%d\n", r);
	r = wildcmp("main.c", "***");
	printf("%d\n", r);
	r = wildcmp("main.c", "m.*c");
	printf("%d\n", r);
	r = wildcmp("main.c", "**.*c");
	printf("%d\n", r);
	r = wildcmp("main-main.c", "ma*in.c");
	printf("%d\n", r);
	r = wildcmp("main", "main*d");
	printf("%d\n", r);
	r = wildcmp("abc", "*b");
	printf("%d\n", r);

	return (0);
}
