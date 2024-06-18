#include<iostream>
using namespace std;
inline int multiply(int n1,int n2)
{
	return n1*n2;
}
inline int cube(int n)
{
	return n*n*n;
}
int main()
{
	int n1,n2;
	cout<<"Enter 2 numbers for multiply: ";
	cin>>n1>>n2;
	cout<<"Multiply of 2 numbers is "<<multiply(n1,n2)<<endl;
	
	int n;
	cout<<"Enter the number for cubic: ";
	cin>>n;
	cout<<"Cubic value is "<<cube(n);
	return 0;
}
