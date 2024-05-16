#include<stdio.h>
struct employee
{
	int age,empno;
	int i;
	char name[50],address[100];
};
main()
{ 
    struct employee emp[5];
    int i;
    for(i=0;i<5;i++)
    {
    	printf("Enter employee number:",i+1);
	    scanf("%d",&emp[i].empno);
	    printf("\nEnter employee name:",i+1);
	    scanf("%s",&emp[i].name);
	    printf("\nEnter employee age:",i+1);
	    scanf("%d",&emp[i].age);
	    printf("\nEnter employee address:",i+1);
	    scanf("%s", &emp[i].address);
	}
	printf("\nEmployee Details:\n");
	for(i=0;i<5;i++)
	{   
	    printf("\nEmployee %d:\n", i + 1);
		printf("\nEmployee number: %d", emp[i].empno);
	    printf("\nEmployee name: %s", emp[i].name);
	    printf("\nEmployee age: %d", emp[i].age);
	    printf("\nEmployee address: %s", emp[i].address);
	}
	
}

