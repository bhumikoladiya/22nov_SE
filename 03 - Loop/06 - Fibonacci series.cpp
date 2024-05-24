#include<stdio.h>
main()
{
	int num,i,a=0,b=1,c;
	printf("Enter a number:");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ", a);
	}
	
	
}
