#include<stdio.h>
main()
{
	int n[5],i,max;
	for(i=0;i<5;i++)
	{
		printf("Enter a Number:");
		scanf("\n%d",&n[i]);
	}
	for(i=0;i<5;i++) //12, 63, 15
	{
		if(n[i]>max) //12>max, 63>12, 15>63
		{
			max=n[i]; //max=12, max=63,
		}	
	}
	printf("\nMaximum number is %d", max);
}
