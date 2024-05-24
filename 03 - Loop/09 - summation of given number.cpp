#include<stdio.h>
main()
{
	int digit,num,sum=0;
	printf("Enter a Number:");
	scanf("%d", &num); //236
	while(num!=0)
	{
	   	digit=num%10; //6
	   	sum+=digit;  //6+3+2
	   	num=num/10; //23
	}
	printf("Sum = %d", sum);
}
