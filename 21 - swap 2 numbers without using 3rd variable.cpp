#include<stdio.h>
main()
{
	int a, b;
	printf("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping the value of a: %d and b: %d", a,b);
	
}
