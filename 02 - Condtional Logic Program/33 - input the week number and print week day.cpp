#include<stdio.h>
main()
{
	int week_num;
	printf("Enter a week number:");
	scanf("%d", &week_num);
	if(week_num==1)
	{
		printf("Monday");
	}
	else if(week_num==2)
	{
		printf("Tuesday");
	}
	else if(week_num==3)
	{
		printf("Wendesday");
	}
	else if(week_num==4)
	{
		printf("Thursday");
	}
	else if(week_num==5)
	{
		printf("Friday");
	}
	else if(week_num==6)
	{
		printf("saturday");
	}
    else if(week_num==7)
	{
		printf("sunday");
	}
	else
	{
		printf("Invalid number");
	}
}
