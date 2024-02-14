#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int age;
		float gpa;
		
		void data(string n,int a, float g){
			name=n;
			age=a;
			gpa=g;
		}
		void show_data(){
			cout<<"the name is : "<<name<<endl;
			cout<<"the age  is : "<<age<<endl;
			cout<<"the gpa  is : "<<gpa<<endl;
		
			
		}
};
int main(){
	Student s1,s2;
	s1.data("ibraheem",20,1.4);
	s1.show_data();
	cout<<endl;
	s2.data("ali",22,3.5);
	s2.show_data();

}
