#include<stdio.h>
main()
{
	int num1,num2,num3,max;
	printf("Enter three numbers:");
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num1>num2 && num1>num3)
	{
		printf("The largest number is: %d", num1);
	}
	else if(num2>num1 && num2>num3)
	{
	    printf("The largest number is: %d", num2);	
	}
	else
	{
		printf("The largest number is %d", num3);
	}
}
