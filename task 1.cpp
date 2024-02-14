#include<iostream>
using namespace std;
class clocktype{
	public:
		int hour;
		int min;
		int sec;
		
		clocktype(){
			hour=0;
			min=0;
			sec=0;
		}
		clocktype(int h){
			hour =h;
		}
		
		clocktype(int h,int m){
			hour=h;
			min=m;
}
		
		clocktype(int h,int m,int s){
			hour=h;
			min=m;
			sec=s;
		}
		void increhour(){
			hour++;
		}
		void incremin(){
			min++;
		}
		void incresec(){
			sec++;
		}
		void display(){
			cout<<" "<<hour<<" "<<min<<" "<<sec<<endl;
		}
		bool isequal(int h,int m,int s){
			if(hour==h&&min==m&&sec==s){
				return true;
			}
			else{
				return false;
			}
		}
		bool isequal(clocktype*temp){
			if(hour==temp->hour&&min==temp->min&&sec==temp->sec){
				return true;
			}
			else{
				return false;
			}
		}
		
};
int main(){
	clocktype*obj = new clocktype();
	cout<<"empty time : "<<endl;
	obj->display();
	clocktype*hour_type=new clocktype(8);
	cout<<"hour type : "<<endl;
	hour_type->display();
	clocktype*min_type=new clocktype(8,10);
	cout<<"min type : "<<endl;
	min_type->display();
	clocktype*full_type=new clocktype(8,10,10);
	cout<<"full type : "<<endl;
	full_type->display();
	full_type->incresec();
	cout<<"full type increment second : "<<endl;
	full_type->display();
	full_type->increhour();
	cout<<"full type increment hour : "<<endl;
	full_type->display();
	full_type->incremin();
	cout<<"full type increment min : "<<endl;
	full_type->display();
	bool flag=full_type->isequal(9,11,11);
	cout<<"flag : "<<flag<<endl;
	clocktype*cmp=new clocktype(9,11,11);
	flag=full_type->isequal(cmp);
	cout<<"object flag : "<<flag<<endl;
	
	
}
