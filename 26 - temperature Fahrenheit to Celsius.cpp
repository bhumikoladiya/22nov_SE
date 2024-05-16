#include<stdio.h>
main()
{
	float fahrenheit, celsius;
	printf("Enter the tempreture in fahrenheit:");
	scanf("%f", &fahrenheit);
	celsius=(5.0/9.0)*(fahrenheit-32);
	printf("Temperature in celsius %f", celsius);
	
}	

