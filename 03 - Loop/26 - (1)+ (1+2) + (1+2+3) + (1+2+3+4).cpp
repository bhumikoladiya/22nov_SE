#include<stdio.h>
main()
{
	int i,j,num,sum;
	printf("Enter a Number:");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j!=i)
			{
				printf("(%d + )", j);
			}
			else
			{
				printf("%d", j);
			}
			sum+=j;
		}
		printf(" ");
	}
}
