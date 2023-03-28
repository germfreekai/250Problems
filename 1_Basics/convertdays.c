#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void DaysToYears(int days);
void DaysToWeeks(int days); 
void DaysToYearsWeeks(int days); 

int main(int argc, char* argv[ argc + 1 ])
{
	
	assert(argc == 2 && "Ussage ./PROGRAM <days>"); 

	int days;
	days = atoi( argv[ 1 ] );

	DaysToYears( days ); 
	DaysToWeeks( days );
	DaysToYearsWeeks( days );

	return EXIT_SUCCESS;

}

void DaysToYears(int days)
{

	printf("%d days equals = %d years\n",
		       days,
	       	       days / 365);

}

void DaysToWeeks(int days)
{

	printf("%d days equals = %d weeks\n", 
			days,
			days / 7); 

}

void DaysToYearsWeeks(int days)
{

	int years; 
	years = days / 365;

	int rdays; 
	rdays = days % 365;

	int weeks;
	weeks = rdays / 7;

	rdays = rdays % 7;

	printf("%d days equals = %d years, %d weeks, %d days\n",
			days,
			years,
			weeks,
			rdays);

}
