#include<stdio.h>
void reverse(int i, char s[])
{
	
	if(s[i]=='\0')
	return;
	reverse(i+1,s);
	printf("%c", s[i]);
}
main()
{
	char str[20];
	printf("Enter string:");
	gets(str);
	printf("Reverse is:");
	reverse(0,str);
	return 0;
}

