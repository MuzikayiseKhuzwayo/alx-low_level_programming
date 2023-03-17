#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>
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
 * mul - multiplies two numbers
 * @num1: string reresented number getting multilied
 * @num2: string number getting multiplied with @num1
 * @len1: length of string num1
 * @len2: length of string num2
 *
 * Return: Nothing
 */
int *mul(char *num1, int len1, char *num2, int len2)
{
	int i, j, k, l, n1, n2, c, temp;
	int *result;

	k = 0, l = 0;

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		c = 0;
		n1 = atoi(&num1[i]);
		l = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = atoi(&num2[j]);
			temp = n1 * n2 + result[k + l] + c;
			c = temp / 10;
			result[l + k] = temp % 10;
			l++;
		}
		if (c > 0)
			result[k + l] += c;
		k++;
	}
	return (result);
}

/**
 * to_str - turns a reversed int array into a char array
 * @intarr: integer array
 * @nnums: number of items inside array
 *
 * Return: nothing
 */
char *to_str(int *intarr, int nnums)
{
	int i, j;
	char *chrarr;

	chrarr = malloc(sizeof(int) * (nnums + 1));
	if (chrarr == NULL)
		return (NULL);

	j = 0;

	for (i = nnums - 1; i >= 0; i--)
	{
		chrarr[j] = intarr[i];
		j++;
	}
	chrarr[j] = '\0';
	return (chrarr);
}

/**
 * print_num - prints a char array to stdout
 * @str: string being printed using putchar
 *
 * Return: Nothing
 */
void print_num(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * remzero - remove the leading zeros in the new string
 * @numstr: string that is given
 *
 * Return: Pointer to string
 */
char *remzero(char *numstr, int len)
{
	while (numstr[len] && numstr[len] == '0')
	{
		len--;
	}
	numstr[len] = '\0';
	return (numstr);
}


/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument values
 *
 * Return: 0 if success, 98 if faiure or Error
 */
int main(int argc, char *argv[])
{
	int i, len1, len2, *res;
	char *newnum;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if ((is_num(argv[1]) == 0) || (is_num(argv[2]) == 0))
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	printf("Number was found to be valid\n");
	len1 = strlen(argv[1]), len2 = strlen(argv[2]), i = (len1 + len2);

	res = calloc((i), sizeof(int));
	if (res == NULL)
		exit(98);
	printf("Malloc inplemented successfully\n");
	res = mul(argv[1], len1, argv[2], len2);
	printf("Number multiplied successfully\n");
	fflush(stdout);


	newnum = calloc((i + 1), sizeof(char));
	if (newnum == NULL)
		exit(98);
	printf("Malloc implemented successfully for newnum\n");
	newnum = remzero(to_str(res, i), i);
	printf("Converted to string successfully\n");
	printf("%s\n", newnum);
	printf("removed zeros successfully, now\n");
	printf("printing number\n\n");
	fflush(stdout);
	print_num(newnum);

	return (0);
}
