#include<stdio.h>
main()
{
	int num[5];
	int i;
	printf("Enter 5 numbers:\n");
	for(i=0;i<5;i++)
	{
		printf("\nNumbers %d:", i+1);
		scanf("%d",&num[i]);
	}
	printf("\nReverse numbers\n");
	for(i=4;i>=0;i--)
	{
		printf("%d ",num[i]);
	}
}
