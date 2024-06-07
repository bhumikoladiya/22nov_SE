#include<stdio.h>
main()
{
	int a1, a2, a3, a4, a5, ave_salary, total_salary;
	printf("Salary of a1:");
	scanf("%d", &a1);
	printf("Salary of a2:");
	scanf("%d", &a2);
	printf("Salary of a3:");
	scanf("%d", &a3);
	printf("Salary of a4:");
	scanf("%d", &a4);
	printf("Salary of a5:");
	scanf("%d", &a5);
	
	total_salary=a1+a2+a3+a4+a5;
	printf("\nTotal Salary of the all employees=%d", total_salary);
	
	ave_salary=total_salary/5;
	printf("\nAverage salary of the all employees=%d", ave_salary);
	
	
	
}
