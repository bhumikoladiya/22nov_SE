#include<stdio.h>
main()
{
	float cus_id,units,amount,total_amount,surcharge;
	char cus_name[20];
	printf("Enter the customer ID:");
	scanf("%f", &cus_id);
	printf("\nEnter the customer Name:");
	scanf("%s", &cus_name);
	printf("\nEnter units consumed:");
	scanf("%f", &units);
	if(units<350)
	{
		amount=units*23;
	}
	else if(units==350 && units>350 && units<600)
	{
		amount=units*25;
	}
	else if(units==600 && units>600 && units<800)
	{
		amount=units*27;
	}	
	else if(units<=800)
	{
		amount=units*29;
		surcharge=0.18;
	}
	total_amount=amount+surcharge;
	printf("\nElectricity bill = %f", total_amount);
}
