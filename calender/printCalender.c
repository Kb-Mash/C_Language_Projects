#include "calender.h"

void print_calender(int month, int year)
{
	int num_days, weekday, spaces, date = 1;

	printf("\n Calender - %d\n", year);

	weekday = day_of_week(date, month, year);
	num_days = get_days(month, year);

	printf("\n ------------%s------------\n", get_month(month));
	printf(" Sat Sun Mon Tue Wed Thu Fri\n");

	for (spaces = 0; spaces < weekday; spaces++)
	{
		printf("    ");
	}

	for(; date <= num_days; date++)
	{
		printf("%4d", date);

		if (++spaces > 6)
		{
			spaces = 0;
			printf("\n");
		}
	}

	printf("\n");
}
