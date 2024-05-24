#include<stdio.h>
main()
{
	int i,num[10];
	int oddnum=0,oddsum=0;
	printf("Enter 10 number:\n");
	for(i=0;i<10;i++)
	{
		printf("Number %d: ", i+1);
		scanf("%d", &num[i]);
		
		if(num[i]%2!=0)
		{
			oddnum++;
			oddsum+=num[i];
		}
	}
	printf("Odd Number: %d", oddnum);
	printf("\nSum of odd number: %d", oddsum);
}
