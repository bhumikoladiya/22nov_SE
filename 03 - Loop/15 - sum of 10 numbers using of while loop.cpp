#include<stdio.h>
main()
{
     int i=1,num,sum=0;
     while(i<=10)
     {
     	printf("Enter a Number %d:", i);
     	scanf("%d", &num);
     	sum+=num;
     	i++;
	 }
	 printf("Sum of the numbers: %d", sum);
		
}
