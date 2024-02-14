#include<iostream>
using namespace std;
class student{
	public:
		int id;
		string name;
		student(){
			
			cout<<"default constructor "<<endl;
			
		}
		student(int i,string n){
			id=i;
			name=n;
			cout<<"parametrize constructor "<<endl;
		}
		void display(){
			cout<<"id is : "<<id<<endl;
			cout<<"name is "<<name<<endl;
		}
		~student(){
			cout<<"destructor"<<endl;
		} // jitne object hoon ghein utni dafa destructor challe gha
};
int main(){
	student s; // this will run default constructor
	student s1(12,"ibraheem");
	s1.display();
	
}

