#include<stdio.h>
main()
{
	int ch;
	printf("Enter the character:");
	scanf("%c", &ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("The character is an vowel");
	}
	else
	{
		printf("The character is not an vowel");
	}
}
