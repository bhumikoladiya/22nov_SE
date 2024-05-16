#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
    int i,length,k=0;
	printf("Enter a Name:");
    scanf("%s", str);
    length=0;
    while(str[length]!='\0')
    {
    	length++;
	}
     for(i=0;i<length;i++)
     {
     	if(str[i]!=str[length-i-1])
     	{
     	  k=1;
     	  break;	
		}
	 }
	 if(k==1)
	 {
	 	printf("\nName is not palindrome");
	 }
	 else
	 {
	 	printf("\nName is palindrome");
	 }


}
