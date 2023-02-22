#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
	int month, month2;
	int day, day2;
	int year, year2;

	month = 2;
	day = 29;
	year = 1997;
	month2 = 2;
	day2 = 29;
	year2 = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);
	
	printf("Date: %02d/%02d/%04d\n", month2, day2, year2);

        day2 = convert_day(month2, day2);

        print_remaining_days(month2, day2, year2);
	return (0);
}
