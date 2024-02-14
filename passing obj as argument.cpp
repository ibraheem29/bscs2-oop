#include<iostream>
using namespace std;
class Example{
	public:
		int a;
		void add(Example E){
			a=a+E.a;
			
		}
		
};
int main(){
	Example E1,E2;
	E1.a=100;
	E2.a=50;
	cout<<"The first value is : "<<E1.a<<endl;
	cout<<"The second value is : "<<E2.a<<endl;
	E1.add(E2);
	cout<<"The new val is : "<<E1.a<<endl;
	//cout<<"the new val is :"<<E2.a<<endl;
}
