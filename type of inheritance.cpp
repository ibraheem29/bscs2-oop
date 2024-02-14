#include<iostream>
using namespace std;
class base {
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
			cout<<"name : "<<name<<endl;
			return name;
		}
		
};
class drive:private base{
	int weight;
	public:
		drive():base(){
			weight=0;
		}
		drive(string n,int w):base(n){
			weight=w;
		}
		void set_weight(int w){
			weight=w;
		}
		int get_weight(){
			cout<<"weight : "<<weight<<endl;
			return weight;
		}
		void first_name(){
			get_name();
		}

		
};
class shape:private drive{
	int height;
	public:
		shape():drive(){
			height=0;
		}
		shape(string n,int w,int h):drive(n,w){
			height=h;
		}
		void set_height(int h){
			height=h;
		}
		int get_height(){
			cout<<"height : "<<height<<endl;
			return height;
		}
		void mul(){
			second_name();
			cout<<"the area of shape is : "<<get_height()*get_weight()<<endl;
		}
		void second_name(){
			first_name();
		}
		int first_weight(){
			get_weight();
		}
		
};
int main(){
	shape obj("cube",20,40);
//	obj.second_name();
	//obj.get_height();
//	obj.first_weight();
	obj.mul();
	
}

