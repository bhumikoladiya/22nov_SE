#include<stdio.h>
#include<string.h>
main()
{
	int i,max=0,len;
	char name[50];
	printf("Enter a Name:");
	gets(name);
	len=strlen(name);
	for(i=0;i<len;i++)
	{
		if(name[i]!=' ')
		{
			max++;
		}
	}
	printf("\nMaximum number of the character is %d", max);
}
