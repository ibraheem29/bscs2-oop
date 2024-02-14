#include <iostream>
using namespace std;
 class shape
 {
 	protected:
 		double a,b,c,d;
 	public:
 	void draw(){
 	cout<< "enter value of side 1" <<endl;
 	cin>> a;
 	cout<< "enter value of side 2" <<endl;
 	cin>> b;
 	cout<< "enter value of side 3" <<endl;
 	cin>> c;
 	cout<< "enter value of side 4" <<endl;
 	cin>> d;
 }
 };
 class triangle:public shape
 {
 	protected:
 	int	tri;
 	public:
 	void draw(double a,double b,double c){
 	cout<< "enter value of side 1" <<endl;
 	cin>> a;
 	cout<< "enter value of side 2" <<endl;
 	cin>> b;
 	cout<< "enter value of side 3" <<endl;
 	cin>> c;
 	
 	tri=a+b+c;
 	cout<<"the value of triangle is :"<<tri<<endl;
 }
 };
 class square:public shape
 {
 	protected:
 		int squ;
 	public:
 		
 	void draw(double a,double b,double c,double d)
	{
 	cout<< "enter value of side 1" <<endl;
 	cin>> a;
 	cout<< "enter value of side 2" <<endl;
 	cin>> b;
 	cout<< "enter value of side 3" <<endl;
 	cin>> c;
 	cout<< "enter value of side 3" <<endl;
 	cin>> d;
 	squ=a*b*c*d;
 	cout<<"the value of triangle is :"<<squ<<endl;
	 }
   
 };
 
 int main()
 {
 	square temp;
 	temp.draw(12.5,3.5,5.5,4.5);
 
   
 }
