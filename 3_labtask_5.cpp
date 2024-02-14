#include<iostream>
using namespace std;
class count{
	static int obj;
	public:
		count(){
			obj++;
		}
		static int get_obj(){
			return obj;
		}
	static	void display(){
			cout<<"number of object : "<<obj<<endl;
		}
};
int count::obj=0;
int main(){
//	count obj1;
//	count obj2;
//	obj1.display();	
	cout<<"number of object : "<<count::get_obj()<<endl;
}
