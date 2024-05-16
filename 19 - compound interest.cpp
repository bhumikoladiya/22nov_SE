#include<stdio.h>
main()
{
	double p,r,t,ci;
	printf("Enter the principal amount p:");
	scanf("%lf", &p);
	printf("Enter rate of interest r:");
	scanf("%lf", &r);
	printf("Enter time(year) t:");
	scanf("%lf", &t);
	ci=p*(1+r/100)*t;
	printf("Compound Interest: %lf", ci);
	
}
