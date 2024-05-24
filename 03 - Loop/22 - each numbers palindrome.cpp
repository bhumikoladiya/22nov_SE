#include<stdio.h>
main()
{
	int num1,num2,num3;
	int c,s=0,r,num,n;
	printf("Enter 3 Number:");
	scanf("%d%d%d", &num1, &num2, &num3);
	n=num1;
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
	
	printf("Palindrome Number");
	else
	printf("Not Palindrome");
    
}
