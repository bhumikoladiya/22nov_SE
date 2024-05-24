#include<stdio.h>
main()
{
	int row, col, k;
	for(row=1;row<=5;row++)
	{
		for(col=5;col>row;col--)
		{
			printf(" ");
		}
		for(k=1;k<=2*row-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}

}

