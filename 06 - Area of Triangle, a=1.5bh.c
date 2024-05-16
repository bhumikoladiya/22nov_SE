#include<stdio.h>
main()
{
	float a, b, h;
	printf("Enter the value of b:");
	scanf("%f", &b);
	printf("Enter the value of h:");
	scanf("%f", &h);
	a=0.5*b*h;
	printf("The value of triangle (a): %f", a);
	getch();
	
}
