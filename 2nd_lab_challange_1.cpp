#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		string uniname;
		string classname;
		student(){
			name="";
			rollno=0;
			uniname="";
			classname="";
			
		}
		student(string n,int r,string u,string c){
			name=n;
			rollno=r;
			uniname=u;
			classname=c;
		}
		student(student &a){
			name=a.name;
			rollno=a.rollno;
			uniname=a.uniname;
			classname=a.classname;
			cout<<"copy constructor called "<<endl;
		}
		void display(){
			cout<<"name : "<<name<<endl;
			cout<<"roll no : "<<rollno<<endl;
			cout<<"uni name : "<<uniname<<endl;
			cout<<"class name : "<<classname<<endl;
		}
		
};
int main(){
	student obj;
	obj.display();
	cout<<endl;
	student obj1("ibrahim",42896,"Ripah","cs");
	obj1.display();
	cout<<endl;
	student obj2(obj1);
	obj2.display();
}
