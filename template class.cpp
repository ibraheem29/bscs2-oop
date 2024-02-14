#include<iostream>
using namespace std;

template <class T>

class A{
	
	public:
		 T data;
		T data1;
		
		A(T a, T b){
			
			data = a;
			data1= b;
			
			
		}
		
		void display(){
			
			cout<<data<<endl<<data1<<endl;
		}
			
	
};
int main(){
	A <float>obj(19.5,34.3);
	obj.display();
	

	
}
