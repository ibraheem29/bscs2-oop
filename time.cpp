#include<iostream>
using namespace std;
class time{
	int min;
	int hour;
	public:
		time(){
			min=0;
			hour=0;
		}
		time(int m,int h){
			min=m;
			hour=h;
		}
		time operator +(time a){
			time res;
			res.min = min + a.min;
			res.hour = hour + a.hour;
			if(res.min>=60){
				res.min-60;
				res.hour++;
			}
			return res;
		}
		time operator -(time b){
			time res;
			res.min = min - b.min;
			res.hour = hour - b.hour;
			if(res.min<0){
				res.min+=60;
				res.hour--;
			}
			return res;
		}
		void get_time(){
			cout<<"time in min : ";
			cin>>min;
			cout<<"time in hour : ";
			cin>>hour;	
		}
		void show(){
			cout<<" time :"<<hour<<" hour and "<<min<<"  min "<<endl;
		}
	
			
		
};
int main(){
	time obj,obj1,obj3;
	cout<<"time 1 details : "<<endl;
	obj.get_time();
	cout<<"time 2 details : "<<endl;
	obj1.get_time();
	cout<<"result "<<endl;
	obj3 = obj+obj1;
	//obj3=obj-obj1;
	obj3.show();
	
	
}



