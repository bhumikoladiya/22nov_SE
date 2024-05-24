#include<stdio.h>
main()
{
	int num,i=1,sum=0;
	printf("Enter a Number:");
	scanf("%d", &num);
	while(i<=num)
	{
		sum+=i;
		i++;
	}
	printf("Sum=%d", sum);
	
}
