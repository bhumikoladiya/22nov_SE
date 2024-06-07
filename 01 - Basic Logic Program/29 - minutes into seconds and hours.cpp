#include<stdio.h>
main()
{
	float minutes, hours, second;
	printf("Enter the minutes:");
	scanf("%f", &minutes);
	hours=minutes/60;
	second=minutes*60;
	printf("Hours %f, Second %f", hours, second);
	
}
