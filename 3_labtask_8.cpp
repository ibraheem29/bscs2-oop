#include<iostream>
using namespace std;
class math{
	public:
		static int add(int a,int b){
			return a+b;
		}
		
};
int main(){
	int result;
	result= math::add(3,5);
	cout<<"result : "<<result;
}
