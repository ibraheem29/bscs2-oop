#include<iostream>
using namespace std;
class Box{
	public:
		double lenght;
		double height;
		double width;
		
		double getvol();
		void getlenght(double len);
		void getheight(double hi);
		void getwidth(double wi);
		
};
double Box::getvol(){
	return lenght*height*width;
}
void Box::getlenght(double len){
	lenght=len;
}
void Box::getheight(double hi){
	height=hi;
}
void Box::getwidth(double wi){
	width=wi;
}
int main(){
	Box obj;
	double vol=0.0;
	obj.getlenght(2.0);
	obj.getheight(3.0);
	obj.getwidth(4.0);
	vol=obj.getvol();
	cout<<"vol is : "<<vol;
	
}

