#include<iostream>
using namespace std;
class base{
	int weight=1;
	int age=5;
	public:
		base(){
			
		}
		int get_weight()const{
			return weight;
		}
		int get_age()const{
			return age;
		}
		void set_age(int a){
			age=a;
		}
		~base(){
			cout<<"des"<<endl;
		}
};
int main(){
	base obj[50];
	base obj1;
	int i;
	for(i=0;i<50;i++){
		obj1.set_age(2*i+1);
		obj[i]=obj1;
	}
	for(i=0;i<50;i++){
		cout<<"# "<<i+1<<": "<<obj[i].get_age()<<endl;
	}
	
}
