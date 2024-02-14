#include<iostream>
using namespace std;

class shape
{
	public:
		void calculatearea()=0;
	
		void printarea()
		{
			
		}
};
class twodim: public shape
{
  public:
  void calculatetwodim() =0;
  void calculatearea()
  {
  	cout<<" calculte area of threedim " <<endl;
  }
  
};
class threedim: public shape
{
	public:
	 
	void calculatethreedim() =0;
	void calculatearea()
	{
	  	cout<<" calculte area of threedim " <<endl;	
	}
};
class circle: public twodim
{
	public:
	 void calculatetwodim()
	 {
	 	cout<<" calculate area of circle " <<endl;
	 }
	 printarea()
	{
		cout<<" print area of circle " <<endl;
	}
};
class triangle: public twodim
{
	public:
		void calculatetwodim()
	 {
	 	cout<<" calculate area of triangle " <<endl;
	 }
	 printarea()
	{
		cout<<" print area of triangle " <<endl;
	}
};
class rectangle: public twodim
{
	public:
		void calculatetwodim()
	 {
	 	cout<<" calculate area of rectangular " <<endl;
	 }
	 printarea()
	{
		cout<<" print area of rectangle " <<endl;
	}
};
class cube: public threedim
{
	public:
		void calculatethreedim()
	 {
	 	cout<<" calculate area of circle " <<endl;
	 }
	 printarea()
	{
		cout<<" print area of cube " <<endl;
	}
};
class cone: public threedim
{
	public:
		void calculatethreedim()
	 {
	 	cout<<" calculate area of cone " <<endl;
	 }
	 printarea()
	{
		cout<<" print area of cone " <<endl;
	}
};

int main()
{
Shape* obj1 = new Shape();
TwoDim* obj2 = new TwoDim();
ThreeDim* obj3 = new ThreeDim();
TwoDim* obj4 = new Circle();
TwoDim* obj5 = new Triangle();
Circle* obj6 = new Circle();
Rectangle* obj7 = new Rectangle();
Cube* obj8 = new Cube();
Cone* obj9 = new Cone();
obj7->printArea();
obj8->printArea();
obj9->printArea();
obj8->calculateThreeDimArea();
obj6->calculateTwoDimArea();
}















