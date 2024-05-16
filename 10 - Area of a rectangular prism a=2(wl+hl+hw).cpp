#include<stdio.h>
main()
{
	int a, w, h, l;
	printf("Enter the value of w:");
	scanf("%d", &w);
	printf("Enter the value of h:");
	scanf("%d", &h);
	printf("Enter the value of l:");
	scanf("%d", &l);
	a=2*(w*l+h*l+h*w);
	printf("The area of a rectangular prism: %d", a);
	
}
