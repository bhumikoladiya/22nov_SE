#include<stdio.h>
main()
{
	int num;
	printf("Enter the number:");
	scanf("%d", &num);
    (num%2==0) ? printf("Number is even") : printf("Number is odd");
}
