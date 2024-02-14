#include<iostream>
using namespace std;

class A{
	public:
		void printData(){
			cout<<"print data";
		}
};
class B: virtual public A{
	
	
};
class C: virtual public A{
	
};
class D: public C, public B{
	
};

int main(){
	D temp;
	temp.C::printData();
	
	
	

	
	
}
