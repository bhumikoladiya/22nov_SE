#include<stdio.h>
main()
{
	float height;
	printf("Enter the height in centimeters:");
	scanf("%f", &height);
	if(height<150)
	{
		printf("The person is short");
	}
	else if(height>=150 && height<170)
	{
		printf("The person average height");
	}
	else
	{
		printf("The person is tall");
	}
}
