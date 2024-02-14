#include<iostream>
using namespace std;
class student{
	public:
		string user;
		int roll;
		float cgpa;
		
};
int main(){
	student s1;
	cout<<"enter user name : ";
	cin>>s1.user;
	cout<<"enter roll no : ";
	cin>>s1.roll;
	cout<<"enter cgpa : ";
	cin>>s1.cgpa;
	cout<<"the username is : "<<s1.user<<endl;
	cout<<"the roll no is : "<<s1.roll<<endl;
	cout<<"the cgpa is : "<<s1.cgpa<<endl;
}
