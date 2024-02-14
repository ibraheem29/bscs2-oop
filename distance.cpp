#include<iostream>
using namespace std;
class Distance{
		float meter;
	public:
		Distance(){
			meter=0.0;
		}
		Distance(float m){
			meter=m;
		
		}
		void operator +(Distance a){
			float i=meter+a.meter;
			cout<<"addition of distance is : "<<i<<endl;
		
		}
		void operator -(Distance b){
			float x=meter-b.meter;
			cout<<"subtraction of distance is : "<<x<<endl;
		
		}
		void get_distance(){
			cout<<"Enter distance : ";
			cin>>meter;
			
		}
		void show(){
			cout<<" distance : "<<meter<<endl;
		}
	
			
		
};
int main(){
	Distance obj,obj1;
	cout<<"distance 1 details : "<<endl;
	obj.get_distance();
	cout<<"distance 2 details : "<<endl;
	obj1.get_distance();
	cout<<"result "<<endl;
	obj+obj1;
	obj-obj1;
	//obj3.show();
	
	
}



