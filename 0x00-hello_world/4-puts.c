#include <stdio.h>
/**
 * main - Entry Point.
 * section header: A C program that outputs a string to standard out using
 * puts() and returns 0 upon accomplishing that task.
 * Return: returns 0 (Successful)
 */
int main(void)
{
	/*
	 * initialise an array of char characters that will all be taken to stdout by
	 * the puts() funtion
	 */
	char put_string[] = "\"Programming is like building a multilingual puzzle";

	puts(put_string);
	return (0);
}
