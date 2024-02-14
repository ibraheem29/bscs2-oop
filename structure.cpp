#include<iostream>
using namespace std;

struct Mystruct{
	string name;
	int age;
};
int main(){
	Mystruct obj;
	obj.name="hello world";
	obj.age=1;
	
	cout<<obj.name<<endl;
	cout<<obj.age<<endl;
	Mystruct obj1;
	obj1.name="ford";
	obj1.age=200;
	cout<<obj1.name<<endl;
}
