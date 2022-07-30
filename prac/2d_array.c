#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main(int argc, char const *argv[])
{
	//initiallize rainfall data for 2011-2015
	float rain[YEARS][MONTHS] =
	{
		{1,3.3,4,2,5,7,2,9,5,4,2,9},
		{9,8,3,5,1,7,3,7,8,3,4,5},
		{1,7,4,5,6,7,2,3,4,9,8,2},
		{7,5,3,4,2,6,8,2,4,6,7,3},
		{2,4,5,2,4,5,8,9,0,6,4,2}
	};

	int year, month;
	float subtot, total;

	printf("YEAR\t\tRAINFALL (inches)\n");
    for (year = 0,total=0; year < YEARS; ++year)
    {
    	for ( month = 0,subtot = 0; month < MONTHS; ++month)
    	{
    		subtot += rain[year][month];
    	}
    	printf("%5d \t\t%15.1f\n",2010 + year, subtot );
    	total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n", total/YEARS);
    
    printf("\nmonthly Averages\n\n");
    printf(" Jan Feb MAr Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (int month = 0,subtot=0; month < MONTHS; ++month)
    {
    	for (int year = 0; year < YEARS; ++year)
    	{
    		subtot += rain[year][month];
    	}
    	printf("%4.1d",subtot/YEARS );
    }

    printf("\n");

	return 0;
}