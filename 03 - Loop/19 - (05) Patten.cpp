#include<stdio.h>
main()
{
	int row,col;
	int num=1;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf(" %d ",num);
			num++;
		}
		printf("\n");
	}
}
