#include<iostream>
using namespace std;
class base{
	public:
		int add(int a,int y){
			cout<<"add of int : "<<a+y<<endl;
		}
		int add(){
			string s1,s2;
			s1="hellow";
			s2=" world";
			string s=s1+s2;
			cout<<"add of string :"<<s<<endl;
		}
};
int main(){
	base obj;
	obj.add(20,30);
	obj.add();
}

