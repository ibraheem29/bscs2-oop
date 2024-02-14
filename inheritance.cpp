#include<iostream>
using namespace std;
class person{
	protected:
		int id;
		string name;
		public:
			void set_p(){

				
				cout<<"enter id : ";
				cin>>id;
				cout<<"enter name : ";
				cin>>name;
			}
			void display_p(){
				cout<<"the name of person is : "<<name<<endl;
				cout<<"the id of the person is : "<<id<<endl;
			}
			
};
class student:public person{
	public:
		string course;
		int fees;
		
			void set_student_c(){
			
				
				cout<<"course : ";
				cin>>course;
				cout<<"fees";
				cin>>fees;
			}
			void display_student_c(){
				cout<<"the course of student is : "<<course<<endl;
				cout<<"the fees of the student is : "<<fees<<endl;
			}
};
int main(){
	student obj;
	obj.set_p();
	obj.set_student_c();
	obj.display_p();
	obj.display_student_c();
}
