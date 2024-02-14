#include<iostream>
using namespace std;
class myclass{
	public:
		myclass(){
			cout<<"cons"<<endl;
		}
		~myclass(){
			cout<<"des"<<endl;
		}
		
};
int main(){
	myclass obj,m;
	obj.~myclass();
	myclass p;
	m.~myclass();
	p.~myclass();
}
