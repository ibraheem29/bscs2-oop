#include<iostream>
using namespace std;
class ship{
	protected :
		string shipname;
		int year;
		public:
			ship(string s,int y){
				shipname=s;
				year=y;
			}
			void set_name(string s){
				shipname=s;
			}
			string get_name(){
				return shipname;
			}
			void set_year(int y){
				year=y;
			}
			int get_year(){
				return year;
			}
			virtual void display(){
				cout<<"ship name : "<<shipname;
				cout<<"built year :"<<year<<endl;
			}
};

class cruiseship:public ship{
	protected:
		int passenger;
		public:
			cruiseship(string s,int y,int p):ship(s,y){
				passenger=p;
			}
			void set_passenger(int p){
				passenger=p;
			}
			int get_passenger(){
				return passenger;
			}
			void display(){
				
				cout<<"ship name : "<<get_name()<<endl;
				cout<<"built Year : "<<get_year()<<endl;
				cout<<"max passenger :"<<passenger<<endl;
			}
			
};
class cargoship:public ship{
		protected:
		int cargo;
		public:
			cargoship(string s,int y,int c):ship(s,y){
				cargo=c;
			}
			void set_cargo(int c){
				cargo=c;
			}
			int get_cargo(){
				//cout<<"Cargo "<<cargo<<endl;
				return cargo;
			}
			void display(){
				cout<<"ship name : "<<get_name()<<endl;
				cout<<"year : "<<get_year()<<endl;
				cout<<"max cargo :"<<cargo<<endl;
			}
			
};
int main(){
	cargoship a("titanic",1942,100);
	ship*obj[5];
	obj[0]=&a;
	
	a.set_cargo(3300);
	a.get_cargo();
	cruiseship b("cruise ship",111,200);
	ship*obj1[5];
	obj1[0]=&b;
	
	for(int j=0;j<1;j++){
		obj[j]->display();
			
	}
	cout<<endl;
	for(int i=0;i<1;i++){
		obj1[i]->display();
		
		
	}
}
