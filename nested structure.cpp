#include<iostream>
using namespace std;

struct addrs{
	string area;
	int houseno;
	string city;
	string state;
	
	
};
struct emp{
	int id;
	string name;
	addrs adress;
};
int main(){
	emp e;
	cout<<"Enter the id"<<endl;
	cin>>e.id;
	cout<<"Enter the name"<<endl;
	cin>>e.name;
	cout<<"Enter the house no "<<endl;
	cin>>e.adress.houseno;
	cout<<"the id is : "<<e.id<<endl;
	cout<<"the name is : "<<e.name<<endl;
	cout<<"the house no is :"<<e.adress.houseno<<endl;
	
	
}
