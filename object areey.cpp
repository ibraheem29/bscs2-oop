#include<iostream>
using namespace std;
class MyClass{
public:
		void data(int i){
			cout<<"obj : "<<i<<" "<<i+1<<endl;
		}	
};
int main(){
	MyClass obj[5];
	for(int i=0;i<5;i++){
		obj[i].data(i);
	}
	
	
}

