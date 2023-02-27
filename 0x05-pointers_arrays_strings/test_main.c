#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	/*int a, b;

	a = 98;
	b = 42;
	printf("a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("Now... a = %d, b = %d\n", a, b);
	*/
	/*		
	char s[11] = "Holberton!";
	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	*/
	/*
	char *str;

	str = "012345678";
	puts_half(str);
	*/
	/*	
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 0);
	*/
	/*
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem, then write the code");
	printf("%s\n", s1);
	printf("%s\n", ptr);
	*/
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
