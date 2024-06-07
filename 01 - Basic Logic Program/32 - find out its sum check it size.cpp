#include<stdio.h>
main()
{
	int num1,num2,sum;
	printf("Enter a num1:");
	scanf("%d", &num1);
	printf("Enter a num2:");
	scanf("%d", &num2);
	sum=num1+num2;
	printf("Sum of num1 and num2: %d", sum);
	printf("\n%d", sizeof(sum));
	
}
