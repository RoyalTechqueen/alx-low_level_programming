#include "main.h"

/**
 * print_remaining_days - takes a day and prints how many days are 
 * left in the year, taking leap years into command
 * @month: month in number form
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400  == 0) || (year % 4  == 100))
	{
		if (month is greater than 2 && day >= 60)
		{
			day ++
		}
		printf("Day of the year %d\n", day);
		printf("Remainng days: %d\n:, 366 - day);
	}
	else 
	{
		if 
