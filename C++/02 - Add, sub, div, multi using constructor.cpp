#include<iostream>
using namespace std;
class calculator
{
	double num1,num2;
	public:
		calculator(double n1,double n2)
		{
		    num1=n1;
			num2=n2;	
		}
		double add()
		{
			return num1+num2;
		}
		double sub()
		{
			return num1-num2;
		}
		double multi()
		{
			return num1*num2;
		}
		double div()
		{
			if(num2!=0)
			{
				return num1/num2;
			}
			else
			{
				cout<<"\nError";
			
			}
		}
};
int main()
{
	double n1,n2;

	cout<<"Enter the number1: ";
	cin>>n1;
	cout<<"Enter the number2: ";
	cin>>n2;
	
	calculator cal(n1,n2);
	
	cout<<"Addition of 2 numbers are "<<cal.add()<<endl;
	cout<<"Subtraction of 2 numbers are "<<cal.sub()<<endl;
	cout<<"Multiplication of 2 numbers are "<<cal.multi()<<endl;
	cout<<"Division of 2 numbers are "<<cal.div()<<endl;
} 
