#include "calender.h"

int main()
{
	int month, year;

	printf("Enter MM: ");
	scanf("%d", &month);

	printf("Enter YYYY: ");
	scanf("%d", &year);

	print_calender(month, year);

	return (0);
}
