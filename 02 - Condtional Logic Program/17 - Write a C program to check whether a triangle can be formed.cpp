#include<stdio.h>
main()
{
	int side1,side2,side3;
	printf("Enter the value of side 1:");
	scanf("%d", &side1);
	printf("Enter the value of side 2:");
	scanf("%d", &side2);
	printf("Enter the value of side 3:");
	scanf("%d", &side3);
	if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1)
	{
		printf("The triagle can be formed");
	}
	else
	{
		printf("The triagle cannot be formed");
	}
}
