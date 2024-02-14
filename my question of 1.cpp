#include <iostream>
using namespace std;
class Student{
//	public:
	string name;
	int id;
	public:
		Student(){
			name=" ";
			id=0;
		}
	string get_name()
	{
		return name;
	}
	int get_id()
	{
		return id;
	}
	void set_name(string new_name)
	{
		name=new_name;
	}
	void set_id(int new_id)
	{
		id=new_id;
	}
	void display()
	{
		cout<<endl<<"the name is: "<<name<<endl;
		cout<<endl<<"the id is: "<<id;
	}
//	void display_getData()
//	{
//		cout<<"the name is: "<<get_name();
//		cout<<"the id is: "<<get_id();
//	}
//	void display_setData()
//	{
//		cout<<"the name is: "<<set_name();
//		cout<<"the id is: "<<set_id();
//	}
		
	
};
int main()
{
	Student s1;
//	cout<<"the Name is: "<<s1.get_name();
//	cout<<"the id is: "<<s1.get_id();
    s1.get_name();
    s1.get_id();
    s1.display();
    // now setting the values of name and id
    s1.set_name("Malik");
    s1.set_id(1234);
    s1.display();
	
}
