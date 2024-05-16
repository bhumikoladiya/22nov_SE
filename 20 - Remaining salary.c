#include<stdio.h>
main()
{
	int monthly_salary, ins_premium, loan_ins, rem_salary;
	printf("Person's monthly salary:");
	scanf("%d", &monthly_salary);
	ins_premium=monthly_salary*0.1;
	loan_ins=monthly_salary*0.1;
	rem_salary=monthly_salary-ins_premium-loan_ins;
	printf("After deduction salary: %d", rem_salary);
	
}
