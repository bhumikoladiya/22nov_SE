#include<stdio.h>
main()
{
	int i=1,num,fact=1;
	while(i<=5)
	{
		printf("Enter Number %d:", i);
		scanf("%d", &num);
		int j=1;
		while(j<=num)
		{
			fact*=j;
			j++;
		}
		printf("Factorial of %d is: %d\n", num, fact);
	}
}
