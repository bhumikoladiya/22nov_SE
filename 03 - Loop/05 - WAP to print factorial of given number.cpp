#include<stdio.h>
main()
{
	int i, num, factorial=1;
	printf("Enter a Number:");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
	    factorial*=i;	
	}
		printf("Factorial %d", factorial);
}
