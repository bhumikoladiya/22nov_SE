#include<stdio.h>
main()
{
	int evennum=0,sumeven=0;
	int num[10], i;
	printf("Enter 10 numbers:\n");
	for(i=0;i<10;i++)
	{
		printf("Number %d:", i+1);
	    scanf("%d", &num[i]);
	
	if(num[i]%2==0)
	{
		evennum++;
		sumeven+=num[i];
	}
	}
	printf("Even numbers %d", evennum);	
	printf("\nSum of even number: %d", sumeven);	
}
