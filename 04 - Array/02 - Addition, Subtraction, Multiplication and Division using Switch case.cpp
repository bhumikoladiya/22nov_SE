#include<stdio.h>
main()
{
	int num1,num2,result;
	int choice;
	printf("Menu:");
	printf("\n1. Addtion");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	
	printf("\nEnter the choice (1-4):");
	scanf("%d", &choice);
	printf("\nEnter the value of num1:");
	scanf("%d", &num1);
	printf("\nEnter the value of num2:");
	scanf("%d", &num2);
	switch(choice)
	{
		case 1:
		result=num1+num2;
		printf("Addtion: %d\n", result);
		break;
		
		case 2:
		result=num1-num2;
		printf("Subtraction: %d\n", result);
		break;
		
		case 3:
		result=num1*num2;
		printf("Multiplication: %d\n", result);
		break;
		
		case 4:
		result=num1/num2;
		printf("Division: %d\n", result);
		
		default:
		printf("Invalid choice. Enter the number between 1 to 4");
	}
	
}
