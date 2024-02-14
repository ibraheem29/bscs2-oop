#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int age;
		void show_data(){
			cout<<"the name of student is :"<<name<<endl;
			cout<<"the age  of student is :"<<age<<endl;
		}
};
int main(){
	Student obj;
	obj.name="ibraheem";
	obj.age=20;
	obj.show_data();
	Student obj1;
	obj1.name="Ali";
	obj1.age=19;
	obj1.show_data();
}
