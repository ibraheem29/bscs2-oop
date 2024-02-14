#include<iostream>
using namespace std;
class iceCreamShake{
	private:
		string falvor;
		int scoop;
		float volume;
		float calories;
		bool fruittoping;
		int scoop_price;
		int fruit_price;
		
		
		public:	
		iceCreamShake(){
			falvor="";
			scoop=0;
			volume=0.0;
			calories=0.0;
			fruittoping=0;
			scoop_price=0;
			fruit_price=0;
		
		}
		iceCreamShake(string f,int s,float v,float c,bool fr){
			falvor=f;
			scoop=s;
			volume=v;
			calories=c;
			fruittoping=fr;
			
		}
		void set_falvor(string f){
			falvor=f;
			if(falvor=="chocolate"){
				scoop_price+=60;
			}
			else if(falvor=="strawberry"){
				scoop_price+=80;
			}
			else if(falvor=="vanila"){
				scoop_price+=50;
			}
			else{
				scoop_price+=100;
			}
			
						
		}
		void set_volume(float v){
			volume=v;
		}
		void set_calories(float c){
			calories=c;
		}
		void set_fruit(bool n){
			fruittoping=n;
			if(n){
				fruit_price+=150;
			}			
		}
		string get_falvor(){
			return falvor;
		}
		
		int get_scoop(){
			return scoop;
		}
		float get_volume(){
			return volume;
			
		}
		float get_calories(){
			return calories;
		}
		bool get_fruitt(){
			return fruittoping;
		}
		void addScoop(){
			
			if(scoop<7){
				scoop++;
				
				calories+=100;
				volume+=75;
			}
			else{
				cout<<"Maximum scoop added "<<endl;
				return;
			}
		}
		void takeasip(){
			volume-=5;
			cout<<"sip taken"<<endl;
		}
		bool isEmpty(){
			if(volume<=0){
				cout<<"Shake is Finished "<<endl;
				return true;
			}
			else{
				return false;
			}
		}
		float calulatePrice(){
			float total=0;
			total = fruit_price+scoop_price;
			cout<<"The Total Price is : "<<total;
			return total;
		}
		void display(){
			cout<<"Scoop :" <<scoop<<endl;
			cout<<"Falvor : "<<falvor<<endl;
			cout<<"volume : "<<volume<<endl;
			cout<<"calories : "<<calories<<endl;
			cout<<"fruit toping : "<<fruittoping<<endl;
			
		}		
};
int main(){
	iceCreamShake obj;
	obj.set_falvor("mango");
	obj.addScoop();
	obj.display();
	cout<<endl;
	obj.set_falvor("vanila");
	obj.addScoop();
	obj.takeasip();
	obj.set_fruit(1);
	obj.display();
	obj.calulatePrice();
		
}
