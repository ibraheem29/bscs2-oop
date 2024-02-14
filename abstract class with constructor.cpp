#include<iostream>
using namespace std;
class base{
	protected:
		int one;
		
		public:
			virtual void fun()=0;
			base(int o){
				one=o;
				
				cout<<"Base class constructor "<<endl;
			}
			
};
class drive:public base{
	protected:
		int three;
		public:
			drive(int o,int t):base(o){
				three=t;
				cout<<"child constructor called "<<endl;
			}
			void fun(){
				cout<<"val of one is :"<<one<<endl<<"val of two is :"<<three<<endl;
			}
};
int main(){
	drive obj(2,4);
	obj.fun();
	base*obj1=new drive(5,6);
	obj1->fun();
}
