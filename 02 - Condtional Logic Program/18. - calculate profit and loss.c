#include<stdio.h>
main()
{
	double cost_price, sales_price, profit, loss;
	printf("Enter the cost price:");
	scanf("%lf", &cost_price);
	printf("Enter the sales price:");
	scanf("%lf", &sales_price);
	profit=sales_price-cost_price;
	loss=cost_price-sales_price;
	if(sales_price>cost_price)
	{
		printf("The profit");
	}
	else if(cost_price>sales_price)
	{
		printf("The loss");
	}
	else
	{
		printf("No profit or no loss");
	}
}
