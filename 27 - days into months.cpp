#include<stdio.h>
main()
{
	int months, days, remaining;
	printf("Enter the days:");
	scanf("%d", &days);
	months=days/30;
	remaining=days%30;
	printf("Month %d, and Days %d", months, remaining);
}
