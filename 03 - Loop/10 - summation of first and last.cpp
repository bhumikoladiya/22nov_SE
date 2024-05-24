#include<stdio.h>
main()
{
	int sum,num,lastdigit,firstdigit;
	printf("Enter a number:");
	scanf("%d", &num);
	lastdigit=num%10;
	while(num>9)
	{
		num/=10;
	}
	firstdigit=num;
	sum=firstdigit+lastdigit;
	printf("Sum of first and last digit: %d", sum);
}
