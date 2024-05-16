#include <stdio.h>
#include <string.h>
main() 
{
    char str[20];
    int l, i;
    printf("Enter a string: ");
    gets(str);
    l = strlen(str);
    printf("String reverse is: ");
    for (i = l - 1; i >= 0; i--) 
	{
        printf("%c", str[i]);
    }
}

