#include<iostream>
using namespace std;
class myclass{
	int age;
	public:
		myclass(){
			age=0;
		}
		myclass(int a){
			age=a;
		}
		void set_age(int a){
			age=a;
		}
		int get_age(){
			cout<<"age is : "<<age<<endl;
			return age;
		}
		
};
int main(){
	myclass obj[5];
	for(int i=0;i<5;i++){
		obj[i].set_age(20);
		obj[i].get_age();
	}
	
}
