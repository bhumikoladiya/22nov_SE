#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf("%d", &b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("After using of multiplication and division a: %d, b:%d", a,b);
	
}
