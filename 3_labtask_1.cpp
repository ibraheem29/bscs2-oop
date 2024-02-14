#include<iostream>
using namespace std;
class myclass{
	public:
		static int count;
		myclass(){
			count++;
		}
		
	
};
int myclass::count;
int main(){
	myclass obj;
	cout<<"number of obj is created : "<<myclass::count<<endl;
	myclass obj1;
	cout<<"number of obj is created : "<<myclass::count<<endl;
	
	
}
