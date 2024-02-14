#include<iostream>
using namespace std;
class add{
	public:
		int x=20;
		int y=10;
	virtual	void display(){
			cout<<"val of add is : "<<x+y<<endl;
		}
};
class sub:public add{
	int a=60;
	int b=40;
	public:
		void display(){
			cout<<"val of sub is : "<<a-b<<endl;
		}
};
int main(){
	add* obj;					// create pointer base object of class base
	sub obj1;
	obj=&obj1;
	obj->display();
}
