#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
	int i,len;
	char str[50];
	printf("Enter a String:");
	gets(str);
	len=strlen(str);
	
	for(i=0;str[i]!='\0';i++)
	{
	  if(islower(str[i]))
	  {
	  	str[i]=toupper(str[i]);
	  }
	  else if(isupper(str[i]))
	  {
	  	str[i]=tolower(str[i]);
	  }
	}
	printf("After changing the string is: %s", str);
}
