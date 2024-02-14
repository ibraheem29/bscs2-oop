#include<iostream>
using namespace std;
class cre{
	public:
		string username;
		string password;
		
		cre(){
			username="";
			password="";
		}
		
		cre(string u,string p){
			username=u;
			password=p;
		}
		void display(){
			
			cout<<"enter username : "<<username;
			cin>>username;
			cout<<"Enter password : "<<password;
			cin>>password;
			
		}
		
		void user(){
			
				system("cls");
				
			if(username=="ibraheem"){
				cout<<"Entered :"<<endl;
			}
			else  {
				cout<<"Wrong Username"<<endl;
			}
			 if(password=="ibraheem"){
				cout<<"You have loged in "<<endl;
				
			}
			else{
				cout<<"wrong Password"<<endl;
			}
			
		}
};

int main(){
	cre obj;
	obj.display();
	obj.user();
	
}
