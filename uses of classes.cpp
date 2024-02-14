//   this is function small program and also question about class ,structure, constructure programs
#include <iostream>
using namespace std;

class car
{
	string name;
	string model;
	string color;
	int year;

    public:

	void in()
	{
		cout<<"enter the car name:"<<endl;
		cin>>name;
		cout<<"enter the car model:"<<endl;
		cin>>model;
		cout<<"enter the car color:"<<endl;
		cin>>color;
		cout<<"enter the car year:"<<endl;
		cin>>year;
		
	}
	void out()
	{
		cout<< "The car is " << name <<endl;
		cout<< "The car model is " << model <<endl;
		cout<< "The car color is " << color <<endl;
		cout<< "This car born in " << year <<endl;
	}
};

 int main()
{
	car c1;
	c1.in();
	c1.out();
	
	return 0;
}
