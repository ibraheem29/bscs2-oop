#include<iostream>
using namespace std;
class base{
	float real;
	float img;
	public:
		base(){
			real=0.0;
			img=0.0;
		}
		base(float r,float i){
			real=r;
			img=i;
		}
		base operator+(base x){
			base res;
			res.real=real+x.real;
			res.img=img+x.img;
			return res;
		}
		void display(){
			cout<<"number are : ";
			cout<<"("<<real<<","<<img<<")"<<endl;
		}
		
};
int main(){
	base obj(4.5,1),obj2(4,3),obj3;
	obj3=obj+obj2;
	obj3.display();
}
