#include<stdio.h>
#include<string.h>
main()
{
	int len,pos;
	char str[100],substr[100];
	printf("Enter a String:");
	gets(str);
	printf("Enter a position to start extraction:");
	scanf("%d", &pos);
	printf("Enter a length of substring:");
	scanf("%d", &len);
	pos--;
	if(pos>=0 && pos<strlen(str) && len>0)
    {
    	strncpy(substr, str+pos,len);
    	substr[len]='\0';
    	printf("The substring from the string is %s", substr);
    }
	else
	{
		printf("Invalid position or length");
	}
	
}
