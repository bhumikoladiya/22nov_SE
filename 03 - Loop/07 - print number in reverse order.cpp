#include<stdio.h>
main()
{
	int i,num,reverse,reminder;
	printf("Enter a Number:");
	scanf("%d", &num); //236
	while(num>0)
	{
		reverse=num%10; //6
	    num=num/10; //23
		printf("%d", reverse); //6
	}
	
}
