#include<stdio.h>
main()
{
	int num[5],i;
	int sum=0;
	printf("Enter 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		printf("Number %d: ", i+1);
		scanf("%d", &num[i]);
		sum+=num[i];
	}
	printf("Sum of 5 numbers: %d", sum);
}
