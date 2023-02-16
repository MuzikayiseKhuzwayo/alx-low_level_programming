#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that prints out a string to stderror using fputchar.
 * Return: returns 1 (Successful)
 */
int main(void)
{
	/*
	 * Use fputchar() to output a sequence of chars one by one to stderr
	 * Until we complete a quoted sentence. Then return 1 after that
	 * has been accomplished
	 */
	fputchar(stderr, "a");
	return (0);
}
