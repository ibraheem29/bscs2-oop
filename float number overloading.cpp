#include<iostream>
using namespace std;
class base{
	double real;
	double img;
	public:
		base(){
			real=0.0;
			img=0.0;
		}
		base(double r,double i){
			real=r;
			img=i;
		}
		friend base operator+(double x,base t){
			base res;
			res.real=x+t.real;
			res.img=t.img;
			return res;
		}
		void display(){
			cout<<"number are : ";
			cout<<"("<<real<<","<<img<<")"<<endl;
		}
		
};
int main(){
	base obj(4.5,4),obj3;
	obj3=2.23+obj;
	obj3.display();
}
