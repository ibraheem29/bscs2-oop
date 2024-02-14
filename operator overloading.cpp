#include<iostream>
using namespace std;
class add{
	int firstnum;
	int secondnum;
	public:
		add(){
			firstnum=0;
			secondnum=0;
		}
		add(int f,int s){
			firstnum=f;
			secondnum=s;
		}
		add operator +(add a){
			add res;
			res.firstnum = firstnum + a.firstnum;
			res.secondnum= secondnum + a.secondnum;
			return res;
		}
		void display(){
			cout<<"add of num is : "<<firstnum<<endl;
			cout<<"add of sec num is : "<<secondnum<<endl;
		}
};
int main(){
	add obj(2,2),obj1(2,5),obj3;
	obj3=obj+obj1;
	obj3.display();
	
}
