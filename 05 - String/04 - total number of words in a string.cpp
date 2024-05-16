#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int i,word=1;
	printf("Enter a string:");
	gets(str);
	i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		word++;
		i++;
	}
	printf("\nNumber of words %d", word);
}
