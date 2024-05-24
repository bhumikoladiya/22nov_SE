#include<stdio.h>
main()
{
	char name[5][20];
	int i;
	printf("Enter 5 names:\n");
	for(i=0;i<5;i++)
	{
	    scanf("%s", &name[i]);
	}
	
	printf("Names entered:\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d.%s", i+1, name[i]);
	}	
}
