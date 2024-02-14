#include<iostream>
using namespace std;
class food{
	string name;
	int price;
	static int order;
	static int order1;
	public:
		food(){
			name="";
			price=0;
			order=0;
		}
		food(string n,int p,int o){
			name=n;
			price=p;
			order=o;
		}
	static	int get_order(){
			return order;
		}
		void display(){
			order++;
			cout<<"order name : "<<name<<endl;
			cout<<"price : "<<price<<endl;
			cout<<"order track : "<<order<<endl;
		}
		void show(){
			order1++;
			cout<<"order name : "<<name<<endl;
			cout<<"price : "<<price<<endl;
			cout<<"order track : "<<order1<<endl;
		}
		
	
};
int food::order=0;
int food::order1=0;
int main(){
	food obj("burger",200,1);
	food obj1("pizza",800,0);
	obj.display();
	obj.display();
	cout<<endl;
	obj1.show();
	obj1.show();
	
	
}
