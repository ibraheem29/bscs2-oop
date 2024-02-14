#include<iostream>
using namespace std;
class base{
	double real;
	double img;
	public:
		base(){
			real=0.0;
			img=0.0;
		}
		base(double r,double i){
			real=r;
			img=i;
		}
	friend	ostream& operator<<(ostream& o,base& x){
			o<<'('<<x.real<<','<<x.img<<')';
			return o;
		}
		friend istream& operator>>(istream& i,base& c){
			i>>c.real;
			i>>c.img;
			return i;
		}
};
int main(){
	base obj(2,4);
	cout<<"enter number ";
	cin>>obj;
	cout<<obj;
}
