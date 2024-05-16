#include<stdio.h>
main()
{
	float gross_salary, basic_salary,hra,da;
	printf("Enter the bacis salary of the employee:");
	scanf("%f", &basic_salary);
	if(basic_salary<=10000)
	{
		hra=basic_salary*0.2;
		da=basic_salary*0.8;
		gross_salary=basic_salary+hra+da;
		printf("\nhra: %f", hra);
		printf("\nda: %f", da);
		printf("\nGross salary of employee: %f", gross_salary);
	}
	else if(basic_salary<=20000)
	{
		hra=basic_salary*0.25;
		da=basic_salary*0.9;
		gross_salary=basic_salary+hra+da;
		printf("\nhra: %f", hra);
		printf("\nda: %f", da);
		printf("\nGross salary of employee: %f", gross_salary);
	}
	else
	{
		hra=basic_salary*0.30;
		da=basic_salary*0.95;
		gross_salary=basic_salary+hra+da;
		printf("\nhra: %f", hra);
		printf("\nda: %f", da);
		printf("\nGross salary of employee: %f", gross_salary);
	}
}
