#include<stdio.h>
#include<string.h>
main()
{
	int i,j,len2,len1;
	char str1[50],str2[50],newstr[50];
	printf("Enter a string 1:");
	gets(str1);
	printf("Enter a string 2:");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	for(i=0;i<len1;i++)
	{
		newstr[i]=str1[i];
	}
	for(j=0;j<len2;j++)
	{
		newstr[i+j]=str2[j];
	}
	newstr[i+j]='\0';
	printf("The concatenated string %s", newstr);
}
