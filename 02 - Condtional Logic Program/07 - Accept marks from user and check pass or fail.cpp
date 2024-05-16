#include<stdio.h>
main()
{
	int marks;
	printf("Enter the marks:");
	scanf("%d", &marks);
	if(marks>=80)
	{
		printf("Distriction");	
	}
	else if(marks>=70)
	{
		printf("First class");
	}
	else if(marks>=60)
	{
		printf("Second class");
	}
	else if(marks>=45)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
}
