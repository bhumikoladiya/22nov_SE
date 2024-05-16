#include<stdio.h>
main()
{
	int a[2][2]={8,7,6,9};
	int b[2][2]={5,2,4,6};
	int row,col;
	printf("\n----First Matrix----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ", a[row][col]);
		}
		printf("\n");
	}
	
	printf("\n----Second Matrix----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ", b[row][col]);
		}
		printf("\n");
	}
}


