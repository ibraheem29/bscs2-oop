#include<iostream>
using namespace std;
class myclass{
	public:
		static int count;
 static void display(){
		cout<<"static object : "<<count<<endl;
		count++;
	}
		
	
};
int myclass::count=0;
int main(){
	myclass ::count=42;
	myclass::display();

	
	
	
}
