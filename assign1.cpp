#include<iostream>
using namespace std;
class icecreameshake{
	public:
		string flavor;
		int scoop;
		float volume;
		float calories;
		bool fruit_topping;
		int scoop_price;
		int fruit_price;
		
		
		
		icecreamshake(string f,int s,float v,float c,bool fr){
			flavor=f;
			scoop=s;
			volume=v;
			calories=c;
			fruit_topping=fr;
		}
		
		void set_flavor(string f)
		{
			flavor = f;
			if(flavor == "choclate")
				scoop_price += 60;
			else if(flavor == "strawberry")
				scoop_price += 80;
			else if(flavor == "vanilla")
				scoop_price += 50;
			else
				scoop_price += 100;
		}
		
		string get_flavor(){
			return flavor;
		}
		
		void set_toppin(bool n){
			
			if(n)
			fruit_price += 150;
			
		}
		
		void add_scoop(){
			
			if(scoop<7){
				scoop++;
				calories += 100;
				volume += 75;
				
			}
			else
				{
					cout<<"Maximum scoops added.\n";
					return;
				}
		}
		
		void take_sip(){
			volume -= 5;
		
		}
		
		bool isEmpty()
		{
			if(volume<=0){
				cout<<"Shake is Empty";
				return true;
			}
			else
				return false;
		}
		
		float calculate_scoop_price(){
			float ans = 0;
			
			ans = scoop_price + fruit_price;
			
			cout<<"   "<<ans;
			return ans;
		}
};


int main(){
	
icecreameshake obj;
	
	obj.set_flavor("chocolate");
	obj.set_flavor("strawberry");
	
//	cout<<obj.get();
	
	
	
}
