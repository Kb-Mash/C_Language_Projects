#include "calender.h"

/**
 * get_month - retrieves the name of the month for corresponding month number
 * @month: value for month
 * Return: a pointer to name of the month
 */
char *get_month(int month)
{
	char *month_str;

	switch (month)
	{
		case 1:
			month_str = "January";
			break;
		case 2:
			month_str = "February";
			break;
		case 3:
			month_str = "March";
			break;
		case 4:
			month_str = "April";
			break;
		case 5:
			month_str = "May";
			break;
		case 6:
			month_str = "June";
			break;
		case 7:
			month_str = "July";
			break;
		case 8:
			month_str = "August";
			break;
		case 9:
			month_str = "September";
			break;
		case 10:
			month_str = "October";
			break;
		case 11:
			month_str = "November";
			break;
		case 12:
			month_str = "December";
			break;
	}
	return (month_str);
}

/**
 * get_days - retrieves the number of days in a month
 * @month: value for month
 * @year: input from user for year
 * Return: the number of days a chosen month has
 */
int get_days(int month, int year)
{
	switch (month)
	{
		case 1:
			return (31);
		case 2:
			if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
				return (29);
			else
				return (28);
		case 3:
			return (31);
		case 4:
			return (30);
		case 5:
			return (31);
		case 6:
			return (30);
		case 7:
			return (31);
		case 8:
			return (31);
		case 9:
			return (30);
		case 10:
			return (31);
		case 11:
			return (30);
		case 12:
			return (31);
	}
}
