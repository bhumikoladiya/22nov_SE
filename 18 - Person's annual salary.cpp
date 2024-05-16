#include<stdio.h>
main()
{
	int monthly_salary, annual_salary;
	printf("Enter person's monthly salary:");
	scanf("%d", &monthly_salary);
	annual_salary=monthly_salary*12;
	printf("Person's annual salary: %d", annual_salary);
	
}
