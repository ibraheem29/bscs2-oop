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
	               // using friend fun
		friend	complex operator+(double lhs,complex rhs){
			complex res;
			res.real=lhs+rhs.real;
			res.img=rhs.img;
			
			return res;
			
		}
	
		void display(){
			cout<<"number are : "<<real<<endl;
		}
	
		
};
int main(){
	complex obj(2,4),obj2;
	obj2=2.23+obj;
	obj2.display();
		
}

