#include<stdio.h>
main()
{
	int num1, num2;
	printf("Enter the value of num1:");
	scanf("%d", &num1);
	printf("Enter the value of num2:");
	scanf("%d", &num2);
	if(num1==num2)
	{
		printf("Both numbers are equal.");
	}
	else
	{
		printf("Both numbers are not equal.");
	}
}
