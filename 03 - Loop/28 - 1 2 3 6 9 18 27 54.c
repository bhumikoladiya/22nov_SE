#include<stdio.h>
main()
{
	int num,i,j=1;
	printf("Enter a Number:");
	scanf("%d", &num);
	printf("Series:");
	for(i=1;i<=num;i++)
	{
		printf("%d", j);
		j=j+3;
		if(i<num)
		{
			printf(" ");
		}
	}
}
