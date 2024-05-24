#include<stdio.h>
main()
{
	int n,r,s=0;
	printf("Enter a Number:");
	scanf("%d", &n); //236
	while(n!=0)
	{
		r=n%10; //6
		if(r>s)  // 6>0
		{
			s=r; // s=6
		}
		n=n/10; //23
	}
	printf("Lagrest Number %d", s);
}
