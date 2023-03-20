#include <stdlib.h>
#include "main.h"

/**
 * error_exit - exits the program with an error message
 *
 * Return: Nothing
 */
void error_exit(void)
{
	int i;
	char *err = "Error\n";

	for (i = 0; err[i] != '\0'; i++)
	{
		_putchar(err[i]);
	}
}

/**
 * is_num - checks if provided argument is a number or not
 * @arg: given string
 *
 * Return: 1 if true, 0 if false
 */
int is_num(char *arg)
{
	int i, valid;

	valid = 1;

	for (i = 0; arg[i] != '\0'; i++)
	{
		if (arg[i] < '0' || arg[i] > '9')
		{
			valid = 0;
			break;
		}
	}
	return (valid);
}

/**
 * remzeros - remove leading zeros in string
 * @str: inut str confirmed to have numbers
 *
 * Return: pointer to string
 */
char *remzeros(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}

/**
 * print_num - prints the provided number
 * @str: given string of numbers
 *
 * Return: Nothing
 */
void print_num(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

/**
 * find_len - finds the length of the string
 * @str: given string argument
 *
 * Return: integer correlating to length of given string
 */
int find_len(char *str)
{
	int len;

	len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_array - creates an array filled with cs
 * @size: byte size of array
 *
 * Return: pointer to a char string
 */
char *create_array(int size)
{
	char *newarr;
	int i;

	newarr = malloc(sizeof(char) * size);
	if (newarr == NULL)
		exit(98);
	for (i = 0; i < size - 1; i++)
		newarr[i] = 'c';
	newarr[i] = '\0';
	return (newarr);
}

/**
 * multiply - multiplies two numbers and stores in a char array
 * @num1: number argument
 * @num2: number argument
 * @numarr: char array of numbers
 *
 * Return: Nothing
 */
void multiply(char *num1, char *num2, char *numarr)
{
	int len1, len2, i, j, k, l, n1, n2, c, temp, *result;

	len1 = find_len(num1), len2 = find_len(num2);
	if (len1 == 0 || len2 == 0)
		numarr = "0";
	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		exit(98);

	k = 0, l = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		c = 0;
		n1 = num1[i] - '0';
		l = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			temp = n1 * n2 + result[k + l] + c;
			c = temp / 10;
			result[k + l] = temp % 10;
			l++;
		}
		if (c > 0)
			result[k + l] += c;
		k++;
	}
	j = len1 + len2 - 1, i = 0;
	while (j >= 0 && result[j] == 0)
		j--;
	if (j == -1)
		numarr = "0";
	while (j >= 0)
	{
		numarr[i++] = result[j--] + '0';
	}
	numarr[i] = '\0';
	free(result);
}

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument values taken into the program
 *
 * Return: 0 if passed, 98 if failed
 */
int main(int argc, char *argv[])
{
	int len;
	char *newnum;

	if (argc != 3)
	{
		error_exit();
		exit(98);
	}
	if (!is_num(argv[1]) || !is_num(argv[2]))
	{
		error_exit();
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = remzeros(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = remzeros(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		print_num("0");
		return (0);
	}
	len = find_len(argv[1]) + find_len(argv[2]);
	newnum = create_array(len + 1);
	multiply(argv[1], argv[2], newnum);
	while (*newnum && (*newnum < '1' || *newnum > '9'))
		newnum++;
	print_num(newnum);
	free(newnum);
	return (0);
}
