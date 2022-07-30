#include <stdio.h>


struct date
{
	int day;
	int month;
	int year;
};



int main(void)
{
	
	struct date today, *datePtr;

	datePtr = &today;

	datePtr->month =9;  //or (*datePtr).month =9;
	datePtr->day = 25;
	datePtr->year = 2015;

	printf("Today's date is %i/%i/%.2i\n",datePtr->day,datePtr->month,datePtr->year );
	return 0;
}