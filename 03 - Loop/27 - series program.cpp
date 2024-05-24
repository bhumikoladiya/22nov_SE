#include<stdio.h>
main()
{
	int num,i;
	printf("Enter a Number:");
	scanf("%d", &num);
	printf("Series:");
	for(i=1;i<=num;i++)
	{
		printf("%d/%d", i, i+1);
		if(i<num)
	{
		printf(" - ");
	}
	}
	
}
