#include <iostream>
using namespace std;
class iphone13
{
	protected:
  int weight;
  double camera;
  double display;
  public:
  	iphone13()
  	{
  		weight=174;
  		camera=12;
  		display=6.1;
  		cout<<"this is iphone13 default constructure"<<endl;
	}
    iphone13(int weight,double camera, double display)
    {
    	this->weight=weight;
    	this->camera=camera;
    	this->display=display;
    
    	cout<<"this is iphone13 parameterized constructure"<<endl;
	}
    ~iphone13()
    {
    	cout<<"this is iphone13 destructure"<<endl;
	}

	
};					

class iphone13pro:public iphone13
{
  public:
  	iphone13pro()
  	{
  		int weight=204;
  		int camera=12;
  		int display=6.1;
  		cout<<"this is iphone13pr0 default constructure"<<endl;
	}
    iphone13pro(int weight,double camera, double display)
    {
    	weight=204;
    	camera=12;
    	display=6.1;
    
    	cout<<"this is iphone13pr0 parameterized constructure"<<endl;
	}
    ~iphone13pro()
    {
    	cout<<"this is iphone13pro destructure"<<endl;
	}

	
};

class iphone13promax:public iphone13pro
{
  public:
  	iphone13promax()
  	{
  		weight=240;
  		camera=12;
  		display=6.7;
  		cout<<"this is iphone13pr0 default constructure"<<endl;
	}
    iphone13promax(int weight,double camera, double display)
    {
    	weight=240;
    	camera=12;
    	display=6.7;
    
    	cout<<"this is iphone13pr0 parameterized constructure"<<endl;
	}
    ~iphone13promax()
    {
    	cout<<"this is iphone13pro destructure"<<endl;
	}

	
};										

int main()
{
   iphone13 a1;
   iphone13pro b1;
   iphone13promax c1;	
}