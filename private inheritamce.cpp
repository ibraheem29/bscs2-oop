#include<iostream>
using namespace std;
class A{
	int age;
	public:
		A(){
			age=0;
		}
		A(int a){
			age=a;
		}
		void set_age(int a){
			age=a;
		}
		int get_age(){
			
			return age;
		}
	
};
class B:private A{
	string name;
	public:
	
		B():A(){
			name="";
			
		}
		B(int a,string n):A(a){
			name=n;
		}
		void set_name(string n){
			name=n;
		}
		string get_name(){
			return name;
		}
		void display(){
			cout<<"name is : "<<name<<endl;
			cout<<"age is : "<<get_age()<<endl;
		}
};
int main(){
	B obj(12,"ibr");
	obj.display();
}
