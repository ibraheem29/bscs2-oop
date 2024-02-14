#include<iostream>
using namespace std;
class base{
	int a;
	public:
		void set_a(int aa){
			a=aa;
		}
		int get_a(){
			return a;
		}
		
};
class drive:private base{
	int b;
	public:
		using base::set_a;
		using base::get_a;
		void set_b(int bb){
			b=bb;
		}
		int get_b(){
			return b;
		}
		void dis(){
			
			cout<<"mul of both val is : "<<get_a()*get_b();
		}
};
int main(){
	drive obj;
	obj.set_a(500);
	obj.get_a();
	obj.set_b(300);
	obj.get_b();
	obj.dis();
}
