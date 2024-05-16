#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int i=0,vowel=0,con=0;
	printf("Enter a string:");
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
		   str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		   vowel++;
		else
		con++;
		i++;
	}
	printf("\nTotal number of vowel in the string is %d",vowel);
	printf("\nTotal number of consonants in the string is %d",con);
}
