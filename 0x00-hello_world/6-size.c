#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that outputs strings of text showing the sizes
 * of data types in C in bytes.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use printf() to output a formatted array of chars onto standard out by
	 * using sizeof() to get the sizes of datatypes in C, thereafter use
	 * formatting to output the number in bytes. Then return 0 after that
	 * has been accomplished
	 */
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
