#include<stdio.h>
main()
{
	double p,r,t,amt,ci;
	printf("Enter the principal amount p:");
	scanf("%lf", &p);
	printf("Enter rate of interest r:");
	scanf("%lf", &r);
	printf("Enter time(year) t:");
	scanf("%lf", &t);
	amt=p*(1+r/100)*t;
	printf("Compound Interest anually: %lf", amt);
	
	ci=amt-p;
	printf("\nCompound Interest: %lf", ci);
	
}
