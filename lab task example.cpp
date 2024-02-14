#include<iostream>
#include<vector>
#include<string>
using namespace std;
class shop{
	public:
		string name;
		int id;
		int price;
		string category;
		string brandname;
		string country;
		
		
		shop(){
			name="";
			id=0;
			price=0;
			category="";
			brandname="";
			country="";
		}
		
		shop(string n,int i,int p,string c,string b,string co){
			name=n;
			id=i;
			price=p;
			category=c;
			brandname=b;
			country=co;
		}
	
	 char menu(){
			system("cls");
			char choice;
			cout<<"Press 1 for adding a product: "<<endl;
			cout<<"Press 2 for showing a product: "<<endl;
			cout<<"press 3 for Top showing product : "<<endl;
			cout<<"press 4 for total price : "<<endl;
			cin>>choice;
			cin.ignore();
			return choice;
		}
	 shop addproduct(){
			system("cls");
			shop s1;
			cout<<"Enter name : ";
			cin>>s1.name;
			cout<<"Enter id  : ";
			cin>>s1.id;
			cout<<"Enter Price : ";
			cin>>s1.price;
			cout<<"Enter category : ";
			cin>>s1.category;
			cout<<"Enter brand name : ";
			cin>>s1.brandname;
			cout<<"Enter country : ";
			cin>>s1.country;
			return s1;			
		}
	 void showsproduct(shop s[],int count){
			system("cls");
			if(count==0){
				cout<<"No record found "<<endl;
			}
			for(int i=0;i<count;i++){
				cout<<"\nname : "<<s[i].name<<"\nPrice : "<<s[i].price<<"\nid : "<<s[i].id<<"\ncategory :"<<s[i].category<<"\nbrand name : "<<s[i].brandname<<"\ncountry : "<<s[i].country<<endl;
					
			}
		
			cout<<"Press any key to countinue"<<endl;
			cin.ignore();
			cin.get();
		}
	 int largest(shop s[],int start,int end){
			int index=start;
			float large=s[start].id;
			for(int x=start;x<end;x++){
				if(large<s[x].id){
					large=s[x].id;
					index=x;
				}
			}
			return index;
			
		}
		
	void total(shop s[],int count){
			system("cls");
			
			if(count==0){
				cout<<"No record found "<<endl;
			}
			else if(count ==1){
				showsproduct(s,1);
				
			}
			else if(count ==2){
				for(int x=0;x<2;x++){
					int index=largest(s,x,count);
					shop temp=s[index];
					s[index]=s[x];
					s[x]=temp;
				}
				showsproduct(s,2);
				
			}
			else{
				for(int x=0;x<3;x++){
					int index=largest(s,x,count);
					shop temp=s[index];
					s[index]=s[x];
					s[x]=temp;
				}
				
			}
				
			showsproduct(s,3);		
		}
		void totalPrice(shop s[], int count) {
        system("cls");
        if (count == 0) {
            cout << "No products found." << endl;
        }
        else {
            int total = 0;
            for (int i = 0; i < count; i++) {
                total += s[i].price;
            }
            cout << "Total price of all products: " << total << endl;
        }
        cout << "Press any key to continue" << endl;
        cin.ignore();
        cin.get();
    }
	};
int main(){
	shop s[10];
	char option;
	int count=0;
	shop obj;
	do{
		option=obj.menu();
		if(option=='1'){
			s[count]=obj.addproduct();
			count=count+1;
		}
		else if(option=='2'){
			obj.showsproduct(s,count);
		}
		else if(option=='3'){
		obj.total(s,count);
		
		}
		else if(option=='4'){
			obj.totalPrice(s,count);
		}
		else if(option=='5'){
			break;			
		}
		else{
			cout<<"invalid choice"<<endl;
		}
		
		
	} while(option!='5');
	cout<<"Press enter to exit";
	cin.ignore();
	cin.get();
		
	
	
	
}
