#include<iostream>
using namespace std;
class Example{
	public:
		int a;
		Example add(Example E,Example e){
			Example ee;
			ee.a=E.a+e.a;
			return ee;	
		}
		
};
int main(){
	Example E1,E2,E3;
	E1.a=200;
	E2.a=50;
	E3.a=0;
	cout<<"The first value is : "<<E1.a<<endl;
	cout<<"The second value is : "<<E2.a<<endl;
	E3=E3.add(E1,E2);
	cout<<"The new val is : "<<E3.a<<endl;
	//cout<<"the new val is :"<<E2.a<<endl;
}
