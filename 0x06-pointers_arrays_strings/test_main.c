#include "main.h"
#include <stdio.h>
#include <string.h>

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
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	/*
	char s1[98] = "Hello ";
    	char s2[] = "World!\n";
    	char *ptr;

    	printf("%s\n", s1);
    	printf("%s", s2);
    	ptr = _strncat(s1, s2, 1);
    	printf("%s", s1);
    	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
    	printf("%s", s1);
    	printf("%s", s2);
    	printf("%s", ptr);
	*/
	/*
	char s1[98];
    	char *ptr;
    	int i;

    	for (i = 0; i < 98 - 1; i++)
    	{
        	s1[i] = '*';
    	}
    	s1[i] = '\0';
    	printf("%s\n", s1);
    	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
   	printf("%s\n", s1);
    	printf("%s\n", ptr);
    	ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    	printf("%s", s1);
    	printf("%s", ptr);
    	for (i = 0; i < 98; i++)
    	{
        	if (i % 10)
        	{
            		printf(" ");
        	}
        	if (!(i % 10) && i)
        	{
            		printf("\n");
        	}
        	printf("0x%02x", s1[i]);
    	}
    	printf("\n");	
	*/
	
	char s1[] = "Hello";
    	char s2[] = "World!";

    	printf("%d\n", _strcmp(s1, s2));
    	printf("%d\n", _strcmp(s2, s1));
    	printf("%d\n", _strcmp(s1, s1));
	
	/*
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    	print_array(a, sizeof(a) / sizeof(int));
    	reverse_array(a, sizeof(a) / sizeof(int));
    	print_array(a, sizeof(a) / sizeof(int));
	*/

	/*
    	char str[] = "Look up! abcdefghijklmnoqrstuvwxyz\n";
   	char *ptr;

    	ptr = string_toupper(str);
    	printf("%s", ptr);
    	printf("%s", str);
	*/

	/*
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    	char *ptr;

   	ptr = cap_string(str);
    	printf("%s", ptr);
   	printf("%s", str);
	*/
	/*
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    	char *p;

    	p = leet(s);
    	printf("%s", p);
    	printf("%s", s);
	*/
	/*
	char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    	char *p;

    	p = rot13(s);
    	printf("%s", p);
    	printf("------------------------------------\n");
    	printf("%s", s);
    	printf("------------------------------------\n");
    	p = rot13(s);
    	printf("%s", p);
    	printf("------------------------------------\n");
    	printf("%s", s);
    	printf("------------------------------------\n");
    	p = rot13(s);
    	printf("%s", p);
    	printf("------------------------------------\n");
    	printf("%s", s);
	*/
	/*
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
        char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
	*/
	/*
	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    	printf("%s\n", buffer);
    	printf("---------------------------------\n");
    	print_buffer(buffer, sizeof(buffer));
	*/	
	return (0);
	

}
