#include<iostream>
using namespace std;
class student{
	public:
	string sname;
	float matricMarks;
	float fscMarks;
	float ecatMarks;
	float  aggregate;
	
	student(string n){
		sname=n;
	}
	
};
int main(){
	student*s1=new student("ibraheem");
	cout<<s1->sname<<endl;
	student*s2=new student("Qasim");
	cout<<s2->sname<<endl;
}

