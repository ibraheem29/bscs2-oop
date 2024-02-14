#include<iostream>
using namespace std;
class base{
	string name;
	public:
		base(){
			name="";
		}
		base(string n){
			name=n;
		}
		void set_name(string n){
			name=n;
		}
		string get_name(){
			cout<<"name is : "<<name<<endl;
			return name;
		}
		~base(){
			cout<<"destructor called ";
		}
		
};
int main(){
	base*obj=new base;
	obj->set_name("ibrheem");
	obj->get_name();
	delete obj;
}
