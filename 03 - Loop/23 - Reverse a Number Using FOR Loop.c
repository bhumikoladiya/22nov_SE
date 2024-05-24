#include<stdio.h>
main()
{
	int num,rem,revnum=0;
	printf("Enter a Number:");
	scanf("%d", &num);
	for(;num!=0;num/=10)
	{
		rem=num%10;
		revnum=revnum*10+rem;
	}
	printf("Reversed number is %d", revnum);
}
