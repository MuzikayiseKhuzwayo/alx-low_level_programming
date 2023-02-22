#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point.
 * section header: A C program that outputs a string to standard out using
 * printf() and returns 0 upon accomplishing that task.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * use printf() to output a formatted array of chars onto standard out and
	 * return 0 after that task has been accomplished
	 */
	printf("Testing Prototype\n");
	print_times_table(8);
	print_times_table(20);
	print_times_table(15);
	return (0);
}
