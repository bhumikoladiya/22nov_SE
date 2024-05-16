#include<stdio.h>
#include<string.h>
main()
{
	int i,len,count=0;
	char str[100],word[10];
	printf("Enter a string:");
	gets(str);
	printf("Enter a search word:");
	gets(word);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(strstr(&str[i],word)==&str[i])
	{
		count++;
	}
  }
    printf("The word is appears %d times in the string.", count,word);	
		
}
