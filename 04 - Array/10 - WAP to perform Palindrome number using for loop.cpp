#include<stdio.h>
main()
{
	int i,num,rev,reminder,ori_num;
	printf("Enter a Number:");
	scanf("%d", &num);
	ori_num=num;
	while(num>0)
	{
		reminder=num%10;
		rev=rev*10+reminder;
		num=num/10;
	}
	if(rev==ori_num)
	{
		printf("The number is Palindrome.");
	}
	else
	{
		printf("The number is not Palindrome");
	}	
}
