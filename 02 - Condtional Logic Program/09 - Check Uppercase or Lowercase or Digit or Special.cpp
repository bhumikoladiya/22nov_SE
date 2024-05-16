#include<stdio.h>
main()
{
	char ch;
	printf("Enter a Character:");
	scanf("%c", &ch);
	if(ch>='A' && ch<='Z')
	{
		printf("It is a uppercase");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("It is lowercase");
	}
	else
	{
		printf("It is digit or special character");
	}
}
