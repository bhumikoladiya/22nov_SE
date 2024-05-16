#include<stdio.h>
main()
{
	int month;
	printf("Enter the month number:");
	scanf("%d", &month);
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || 
	   month == 10 || month == 12)
	{
		printf("Days of the month 31");
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		printf("Days of the month 30");
	}
	else if(month == 2)
	{
		printf("Days of the month 28 or 29");
	}
	else
	{
		printf("Invalid month");
	}
}
