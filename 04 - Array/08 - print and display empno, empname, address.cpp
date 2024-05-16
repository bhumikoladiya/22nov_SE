#include<stdio.h>
struct employee
{
	int age,num;
	char name[50];
	char address[100];	
};
main()
{
	struct employee emp;
	printf("Enter employee number:");
	scanf("%d",&emp.num);
	printf("\nEnter employee name:");
	scanf("%s",&emp.name);
	printf("\nEnter employee age:");
	scanf("%d",&emp.age);
	printf("\nEnter employee address:");
	scanf("%s", &emp.address);
	
	printf("\nEmployee number: %d", emp.num);
	printf("\nEmployee name: %s", emp.name);
	printf("\nEmployee age: %d", emp.age);
	printf("\nEmployee address: %s", emp.address);
	
}
