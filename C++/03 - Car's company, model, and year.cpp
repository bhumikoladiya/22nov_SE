#include<iostream>
using namespace std;
class car
{
	private:
		int year;
		string model;
		string company;
	public:
		void get()
		{
			cout<<"Enter the year, company and model of the car: ";
			cin>>year>>company>>model;
		}
		void set()
		{
			cout<<"\nCar's year is "<<year <<" Company is "<<company <<" Model is "<< model;
		}	
};
int main()
{
	car c1;
	cout<<"Enter details for c1\n";
	c1.get();
	c1.set();
	return 0;
}
