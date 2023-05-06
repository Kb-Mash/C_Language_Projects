#ifndef CALENDER_H
#define CALENDER_H

#include <stdio.h>
#include <stdlib.h>

char *get_month(int month);
int  get_days(int month, int year);
int day_of_week(int date, int month, int year);
void print_calender(int month, int year);

#endif
