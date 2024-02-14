#include<iostream>
using namespace std;
int main(){
	int var=5;
	int *ptr;
	// adress store of var
	ptr=&var;
	// print the val of var
	cout<<"the value of var is :"<<var<<endl;
	//print the adress of var
	cout<<"the adress of value var is :"<<&ptr<<endl;
	
	cout<<"ptr is :"<<ptr<<endl;
	
	cout<<"pointer :"<<*ptr<<endl;
}
