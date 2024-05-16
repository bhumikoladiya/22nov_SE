#include<stdio.h>
main()
{
	float days, years;
	printf("Enter the years:");
	scanf("%f", &years);
	days=years*365;	
	printf("Days: %f", days);
	
	printf("\nEnter the days:");
	scanf("%f", &days);
	years=days/365;
	printf("Years: %f", years);
	
}
