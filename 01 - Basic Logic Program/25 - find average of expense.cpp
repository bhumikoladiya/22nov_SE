#include<stdio.h>
main()
{
	float ex1, ex2, ex3, ex4, ex5, ave_expense, total_expense;
	printf("Expense 1:");
	scanf("%f", &ex1);
	printf("Expense 2:");
	scanf("%f", &ex2);
	printf("Expense 3:");
	scanf("%f", &ex3);
	printf("Expense 4:");
	scanf("%f", &ex4);
	printf("Expense 5:");
	scanf("%f", &ex5);
	
	total_expense=ex1+ex2+ex3+ex4+ex5;
	printf("\nTotal expense: %f", total_expense);
	
	ave_expense=total_expense/5;
	printf("\nAverage of expense: %f", ave_expense);
	
	
}
