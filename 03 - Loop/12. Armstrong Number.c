#include<stdio.h>
main()
{
	int num,rem,orinum,result=0,n=0;
	printf("Enter a Number:");
	scanf("%d", &num);
	orinum=num;
	while(orinum!=0)
	{
		orinum/=10;
		n++;
	}
	orinum=num;
	while(orinum!=0)
	{
		rem=orinum%10;
		result=result+pow(rem,n);
		orinum/=10;
	}
	if(result==num)
	{
		printf("The number is armstrong number", num);
	}
	else
	{
		printf("The number is not an armstrong number", num);
	}
}
