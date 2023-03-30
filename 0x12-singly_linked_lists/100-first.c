#include "lists.h"
void print_before_main(void) __attribute__((constructor));
/**
 * print_before_main - prints words before the main function executes
 *
 * Sources: https://www.tutorialspoint.com/
 *
 * Return: Nothing
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
