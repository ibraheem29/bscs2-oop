#include<iostream>
using namespace std;
class complex{
	float real;
	float img;
	public:
		complex(){
			real=0.0;
			img=0.0;
		}
		complex(float r,float i){
			real=r;
			img=i;
		}
		complex operator+(double rhs){
			complex res;
			res.real=real+rhs;
			res.img=img;
			
			return res;
			
		}
		complex operator+(complex t){
			complex res;
			res.real=real+t.real;
			res.img=img+t.img;
			return res;
		}
		void display(){
			cout<<"number are : "<<real<<endl;
		}
		void show(){
			cout<<real<<","<<img<<"i"<<endl;
		}
		
};
int main(){
	complex obj(2,4),obj2;
	obj2=obj+2.23;
	obj2.display();
	complex c1(6,4),c2(2,8);
	complex c3;
	c3=c1+c2;
	c3.show();
	
}
