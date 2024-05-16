#include<stdio.h>
main()
{
	int a[2][2]={8,5,6,2};
	int b[2][2]={4,3,2,1};
	int c[2][2];
	int row,col;
	printf("\n-----First Matrix-----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ", a[row][col]);
		}
		printf("\n");
	}
	
	printf("\n-----Second Matrix-----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ", b[row][col]);
		}
		printf("\n");
	}
	
	printf("\n-----Addition Matrix-----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			printf(" %d ", c[row][col]);
		}
		printf("\n");
	}
	
	printf("\n-----Subtraction Matrix-----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			c[row][col]=a[row][col]-b[row][col];
			printf(" %d ", c[row][col]);
		}
		printf("\n");
	}
	
	printf("\n-----Multiplication Matrix-----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			c[row][col]=a[row][col]*b[row][col];
			printf(" %d ", c[row][col]);
		}
		printf("\n");
	}
}
