#include<stdio.h>
main()
{
	int num[5],i;
	printf("Enter 5 numbers:");
	for(i=0;i<5;i++)
	{
		printf("\nNumber %d: ",i+1);
		scanf("%d", &num[i]);
	}
	for(i=0;i<5;i++)
	if(num[i]%2==0)
	{
		printf("%d is even\n", num[i]);
	}
	else
	{
		printf("%d is odd\n", num[i]);
	}
}
