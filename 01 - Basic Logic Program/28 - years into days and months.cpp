#include<stdio.h>
main()
{
	float years, days, months;
	printf("Enter the year:");
	scanf("%f", &years);
	months=years*12;
	days=years*365;
	printf("Months %f, Days %f", months, days);
	
}
