#include<stdio.h>
main()
{
	int num,i;
	printf("Enter a Number:");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		if(i!=num)
		{
			printf("%d + ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
}
