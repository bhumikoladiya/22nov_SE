#include<stdio.h>
main()
{
	int row,col;
	char ch='A';
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c", ch);
			ch++;
		}
		printf("\n");
	}
}
