#include<iostream>
using namespace std;
class student{
	protected:
	string name;
	int age;
	string department;
	public:
		student(){
			name="";
			age=0;
			department="";			
		}
		student(string n,int a,string d){
			name=n;
			age=a;
			department=d;
		}
		void set_studentinfo(string n){
			name=n;
			
			
		}
			
		string get_studentinfo(){
			return name;
		}
	
};
class result:public student{
	protected:
		int res;
		int marks;
		string name;
		int age;
		string department;
	
		public:
			result(){
				results=0;
				marks=0;
				name="";
				age=0;
				department="";
			}
			result(int r,int m,string n,int a,string d);
				res=r;
				marks=m;
				name=n;
				age=a;
				department=d;
				
			}
			void set_results(int r){
				results=r;
				float total;
				
				total=(marks/100)*100;
				cout<<"the total marks is : "<<total<<endl;
			}
			int get_results(){
				return results;
			}
			void display(){
				cout<<"name :"<<name<<endl;
				cout<<"age :"<<age<<endl;
				cout<<"department :"<<department<<endl;
				cout<<"marks:"<<marks<<endl;
				cout<<"result : "<<results<<endl;
				
				
			}
	
};
int main(){
	result obj(100,90,"ibr",20,"cs");
	obj.display();
}
