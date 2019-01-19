#include "stdio.h"
struct Date
{
int day;
int month;
int year;
} today;
int main()
{
	today.day=8;
	today.month=8;
	today.year=2016;
	printf("Today's date is %d-%d-%d.\n",today.year,today.month,today.day);
	return 0;
} 