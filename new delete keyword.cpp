#include <iostream>
using namespace std;
class vehicle
{
  protected:
	int enginecapacity;
	int seatcapacity;
  public:
    vehicle()
	{
		cout<<"default constructure of vehicle "<<endl;
	}
	vehicle(int enginecapacity, int seatcapacity)
	{
		this->enginecapacity=enginecapacity;
		this->seatcapacity=seatcapacity;
		cout<<"parameterized constructure of vehicle "<<endl;
		cout<<" engine capacity is: "<< enginecapacity<<endl;
		cout<<" seat capacity is: "<<seatcapacity <<endl;
	}
	void changeenginecapacity(int newengine)
	{
		enginecapacity=newengine;
		cout<<"new engine capacity is: "<< enginecapacity<<endl;
	}
	void changeseatcapacity(int newseat)
	{
		seatcapacity=newseat;
		cout<<"new seat capacity is: "<<seatcapacity <<endl;
	}
	void display()
	{
		cout<<enginecapacity<<endl;
		cout<<seatcapacity<<endl;
	}
	~vehicle()
	{
		cout<<"destructure of vehicle "<<endl;
		}	
};
class car:public vehicle
{
	private:
		int windscreensize;
		int steeringsize;
	public:
		car()
		{
		cout<<"default constructure of car "<<endl;	
		}
		car(int windscreensize, int steeringsize,int enginecapacity, int seatcapacity):vehicle(enginecapacity, seatcapacity)
		{
			this->windscreensize=windscreensize;
			this->steeringsize=steeringsize;
		cout<<"parameterized constructure of car "<<endl;
		}
		void display()
		{
			cout<<windscreensize<<endl;
			cout<<steeringsize<<endl;
		}
	~car()
		{
			cout<<"destructure of car "<<endl;
		}
};



class bike:public vehicle
{
	private:
		int handlesize;
	public:
		bike()
		{
		cout<<"default constructure of bike "<<endl;	
		}
		bike(int handlesize, int enginecapacity,  int seatcapacity):vehicle(enginecapacity,seatcapacity)
		{
			this->handlesize=handlesize;
		cout<<"parameterized constructure of bike "<<endl;	
		}
		void display()
		{
			cout<<handlesize<<endl;
		}
		~bike()
		{
			cout<<"destructure of bike "<<endl;
		}
	
};

int main()
{
	
	car *c1= new car(7,3,4,5);
	c1->display();
	
	bike *b1= new bike(5,6,7);
	b1->display();
	
	vehicle v1(6,7);
	v1.changeenginecapacity(700);
	v1.changeseatcapacity(150);
	v1.display();
    
    delete c1;
    delete b1;


	return 0;
}