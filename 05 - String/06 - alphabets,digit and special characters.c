#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	int schar=0,alfa=0,digit=0,i=0;
	printf("Enter the string:");
	gets(str);
	while(str[i]!='\0')
	{
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
			alfa++;
		else if((str[i]>='0'&&str[i]<='9'))
			digit++;
		else
		    schar++;
			i++;	
	}
	printf("\nNumber of alphabets is %d", alfa);
	printf("\nNumber of digit is %d", digit);
	printf("\nNumber of special characters is %d", schar);
}
