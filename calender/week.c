#include "calender.h"

/**
 * day_of_week - determines what day of the week a date falls on
 * @date: date of the day
 * @month: month of the day to get
 * @year: year of the day to get
 * Return: int representing day of the week
 */
int day_of_week(int date, int month, int year)
{
	/* Zeller's congruence algorithm */
	if (month == 1 || month == 2)
	{
		month += 12;
		year--;
	}

	int q = date;
	int m = month;
	int k = year % 100;
	int j = year / 100;
	int h = (q + ((13 * (m + 1)) / 5) + k + (k / 4) + (j / 4) - 2 * j) % 7;

	return (h);
}
