#include<iostream>
using namespace std;
class student{
	public:
	string sname;
	float matricMarks;
	float fscMarks;
	float ecatMarks;
	float  aggregate;
	
	student(){
		cout<<"default constructor"<<endl;
	}
	student(student*s){
		sname=s->sname;
	 	matricMarks=s->matricMarks;
		fscMarks=s->fscMarks;
	 	ecatMarks=s->ecatMarks;
	 	aggregate=s->aggregate;
		
	}
	
};
int main(){
	student*s1=new student();
	s1->sname="ibraheem";
	student *s2=new student(s1);
	cout<<s1->sname<<endl;
	cout<<s2->sname<<endl;

}
