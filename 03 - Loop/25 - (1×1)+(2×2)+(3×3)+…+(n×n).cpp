#include<stdio.h>
main()
{
	int num,i,sum;
	printf("Enter a Number:");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		if(i!=num)
		{
			printf("(%d*%d)+ ", i,i);
		}
		else
		{
			printf("(%d*%d)", i,i);
		}		
	}	
}

