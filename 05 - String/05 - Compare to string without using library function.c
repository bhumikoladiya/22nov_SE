#include<stdio.h>
#include<string.h>
main()
{
	char s1[50],s2[50];
	int i,s=0;
	printf("Enter string s1:");
	gets(s1);
	printf("Enter string s2:");
	gets(s2);
	for(i=0;s1[i]!='\0' || s2[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			s=1;
			break;
		}	
	}
	if(s==1)
	{
		printf("String are not same");
	}
	else
	{
		printf("String is same");
	}
}
