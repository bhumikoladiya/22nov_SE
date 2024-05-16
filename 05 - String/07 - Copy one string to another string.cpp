#include<stdio.h>
#include<string.h>
main()
{
	char s1[50],s2[50];
	printf("Enter a string s1:");
	gets(s1);
	strcpy(s2,s1);
	printf("s2=%s", s2);
}
