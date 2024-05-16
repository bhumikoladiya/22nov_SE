#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	int i,count=0;
	printf("Enter a Name:");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf("%d", count);
}
