#include<stdio.h>
main()
{
	int num, i, oddnum=0,evennum=0;
	printf("Enter 5 number:");
	for(i=1;i<=5;i++)
	{
		printf("\nNumber %d:", i);
		scanf("%d", &num);
	
	if(num%2==0)
	{
		evennum++;
	}
	else
	{
		oddnum++;
	}
	i++;
    }  
    printf("\nNumber of even numbers %d", evennum);
    printf("\nNumber of odd numbers %d", oddnum);
    
}
