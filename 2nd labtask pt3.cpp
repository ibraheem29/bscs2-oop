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
		sname="ibraheem";		
	}
	
};
int main(){
	student*s1=new student();
	cout<<s1->sname;

}
