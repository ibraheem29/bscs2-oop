#include<iostream>
using namespace std;
class base{
	public:
		virtual void display()=0;
		
};
class drive:public base{
	public:
		void display(){
			cout<<"in drived class ";
		}
};
int main(){
	base*obj=new drive;
	obj->display();
}
