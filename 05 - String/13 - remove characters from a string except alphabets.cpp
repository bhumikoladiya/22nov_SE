#include<stdio.h>
#include<string.h>
main()
{
	int i,len,j;
	char str[50],newstr[50];
	printf("Enter a string:");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
			newstr[j]=str[i];
			j++;
		}
	}
	newstr[j]='\0';
	printf("Modify string: %s", newstr);
}
