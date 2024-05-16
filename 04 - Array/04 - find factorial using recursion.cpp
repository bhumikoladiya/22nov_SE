#include<stdio.h>
int factorial(int x)
{
	if(x>1)
	{
		return x*factorial(x-1);
	}
}
main()
{
	printf("The factorial number is %d", factorial(5));
}
