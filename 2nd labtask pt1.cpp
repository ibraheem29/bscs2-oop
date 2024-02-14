#include<iostream>
using namespace std;
class student{
	public:
	string sname;
	float matricMarks;
	float fscMarks;
	float ecatMarks;
	float  aggregate;
	
};
int main(){
	student*s1=new student();
	cout<<s1->sname<<endl;
	cout<<s1->matricMarks<<endl;
	cout<<s1->fscMarks<<endl;
	cout<<s1->ecatMarks<<endl;
	cout<<s1->aggregate<<endl;
	
}
