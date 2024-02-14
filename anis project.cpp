#include<iostream>
#include<conio.h>
using namespace std;

class Vehicle{
	protected:
		string vehicle;
		string name;
		int model;
		int plate;
		public:
			Vehicle(){
				vehicle="";
				name="";
				model=0;
				plate=0;
			}
			Vehicle(string v,string n,int m, int p){
			 	
				vehicle=v;
				name=n;
				model=m;
				plate=p;
			}
			void type(){
				cout<<"enter the name of vehicle: "<<endl;
				cin>>name;
				cout<<"enter model of vehicle: "<<endl;
				cin>>model;
				cout<<"enter the license plate number: "<<endl;
				cin>>plate;
			}
			void addvehicle(){
				cout<<"Enter the type of vehicle: "<<endl;
				cout<<"press c for car"<<endl<<"press b for bike"<<endl<<"press t for truck";
				cin>>vehicle;
				if(vehicle=="c"||vehicle=="C"){
					cout<<"You entered the car type"<<endl;
					type();
				}
				else if(vehicle=="b"||vehicle=="B"){
					cout<<"You entered the bike type"<<endl;
					type();
				}
				if(vehicle=="t"||vehicle=="T"){
					cout<<"You entered the truck type"<<endl;
					type();
				}
			}
				void show(){
		
				cout<<"name of car : "<<name<<endl;
				cout<<"model of car : "<<model<<endl;
				cout<<"plate of car : "<<plate<<endl;
			}
	
			string get_name(){
				
			return name;
			}
			int get_model(){
				return model;
			}
			int get_plate(){
				return plate;
			}
			
		
};
class admin:public Vehicle{
	
	protected:
		 int space;
		 string username;
		 Vehicle v;
		 char option;
	public:
		
		void entry(){
			
			cout<<"Enter user name: "<<endl;
			cin>>username;
			v.addvehicle();
			
		}
		
    void display() {
      			show();
    }
	
};
char option;
/*void menu(){
			cout<<"\nPress 1 to enter a vehicle\n";
			cout<<"\nPress 2 to exit a vehicle\n";
		
		}*/
int main(){
	Vehicle v1;
	admin a1;
	char op;
	//menu();
	do{				system("cls");
			cout<<"\nPress 1 to enter a vehicle\n";
			cout<<"\nPress 2 to show a vehicle\n";
			op=getch();
			if(op=='1'){
				cout<<"ENTER CAR DETAILS"<<endl;
				a1.entry();
			}
			else if(op=='2'){
				 cout << "SHOW VEHICLE DETAILS" << endl;
				a1.display();
			}
			
}	while(op!='3');
	return 0;
}
