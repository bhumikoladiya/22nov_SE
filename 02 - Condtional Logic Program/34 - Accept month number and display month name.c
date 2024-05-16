#include<stdio.h>
main()
{
	int month_num;
	printf("Enter the month number:");
	scanf("%d", &month_num);
	if(month_num==1)
	{
		printf("January");
	}
	else if(month_num==2)
	{
		printf("February");
	}
	else if(month_num==3)
	{
		printf("March");
	}
	else if(month_num==4)
	{
		printf("April");
	}
	else if(month_num==5)
	{
		printf("May");
	}
	else if(month_num==6)
	{
		printf("June");
	}
	else if(month_num==7)
	{
		printf("July");
	}
	else if(month_num==8)
	{
		printf("August");
	}
	else if(month_num==9)
	{
		printf("Setptember");
	}
	else if(month_num==10)
	{
		printf("October");
	}
	else if(month_num==11)
	{
		printf("November");
	}
	else if(month_num==12)
	{
		printf("December");
	}
	else
	{
		printf("Invalid month number");
	}
}
