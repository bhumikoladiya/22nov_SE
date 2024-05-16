#include<stdio.h>
main()
{
	double num;
	printf("Enter the number:");
	scanf("%lf", &num);
	if(num>0)
	{
		printf("The number is positive");
	}
	else 
	{
		printf("The number is negative");
	}
}
