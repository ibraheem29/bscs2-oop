#include<iostream>
using namespace std;
class student{
	string name;
	static int rollno;
	int roll_no;
	public:
		student(){
			name="";
			rollno=roll_no;
			rollno++;
			cout<<"rollno:"<<rollno<<endl;
		}
		student(string n,int r){
			name=n;
			rollno=r;
		}
		void display(){
	
			cout<<"rollno:"<<rollno<<endl;
		}
		
};
int student::rollno=1;
int main(){
	student obj;
	student obj1;
	student obj2;

}
