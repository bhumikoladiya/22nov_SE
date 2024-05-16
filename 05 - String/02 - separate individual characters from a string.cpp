#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	int i;
	printf("Enter a name:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		printf("\n%c",name[i]);
	}
}
