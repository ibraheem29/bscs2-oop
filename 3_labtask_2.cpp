#include<iostream>
using namespace std;
class myclass{
	public:
		static int count;
	void display(){
		cout<<"static object : "<<count<<endl;
		count++;
	}
		
	
};
int myclass::count=1;
int main(){
	myclass obj;
	myclass obj1;
	obj.display();
	obj1.display();
	
	
	
}
