#include<iostream>
using namespace std;
class shape{
	public:
		double width;
		double height;
		void set_dimension(double w,double h){
			width=w;
			height=h;
		}
		void getarea(){
			return ;
		}
};
class rectangle:public shape{
	public:
		double getarea(){
			return width*height;
		}
		
};
int main(){
	rectangle obj;
	obj.set_dimension(5.0,3.0);
	cout<<"area is "<<obj.getarea()<<endl;
}
