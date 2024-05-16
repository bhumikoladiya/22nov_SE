#include<stdio.h>
main()
{
	char name[5][50];
	int i;
	printf("Enter 5 students name:");
	for(i=0;i<5;i++)
	{
		printf("\nStudents %d:", i+1);
		scanf("%s", &name[i]);
	}
	printf("\nName of students\n");
	for(i=0;i<5;i++)
	{
		printf("\nStudent %d: %s", i+1, name[i]);
	}
}
