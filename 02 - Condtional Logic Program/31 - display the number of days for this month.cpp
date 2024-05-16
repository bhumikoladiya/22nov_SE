#include<stdio.h>
main()
{
	int month;
	printf("Enter the month:");
	scanf("%d", &month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("\n Days - 31");
		break;
		
		case 4:
		case 6:
		case 9:
		case 11:
		printf("\n Days - 30");
		break;
		
		case 2:
		printf("\n Days - 28 or 29");
		break;
		
		default:
		printf("Invalid month");
		break;
	}
}
