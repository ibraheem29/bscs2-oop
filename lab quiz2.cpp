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
				
				cout<<"ship name "<<get_name()<<endl;
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
	/*ship*obj[4];
	obj[3]=new cargoship("titanic",1903,3300);
	obj[3]->display();*/
	ship*obj=new cargoship("titanic",1222,3000);
	obj->display();
	cargoship*obj1=new cargoship("meow",200,4000);
	obj1->set_cargo(20000);
	obj1->display();
	//obj->set_cargo(29);
}
