#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d", &a);
	a=6*a*a;
	printf("The area of the cube %d", a);
	getch();
}
