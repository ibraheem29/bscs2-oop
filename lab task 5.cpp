#include<iostream>
using namespace std;
class sale{
	float arr[3];
	public:
		void get_data(){
			cout<<"enter sales for three months "<<endl;
			for(int i=0;i<3;i++){
				cout<<"month "<<i+1 << ":";
				cin>>arr[i];
			}
		}
		void put_data(){
			cout<<"sales :"<<endl;
			for(int i=0;i<3;i++){
				cout<<"sale for months "<<i+1<<":"<<arr[i]<<endl;			
			}
		}
};
class publicant{
	string title;
	float price;
	sale ob;
	public:	
	
		publicant(){
			title="";
			price=0.0;
			
		}
		publicant(string t,float p){
			title=t;
			price=p;
		}
		
		void get_title(){
			cout<<"Enter title : ";
			cin>>title;
						
		}
		void get_data(){
			cout << "Enter price: ";
    		cin >> price;
    		
		}
		void put_datatitle(){
			cout<<"title is :"<<title<<endl;
			
		}
		void putdata(){
			cout<<"price is :"<<price<<endl;
		
		}	
};

class book:public publicant,public sale{
	int pagecount;
	
	public:
		
		void get_data(){
			publicant::get_title();
			publicant::get_data();
			cout<<"enter number of pages : "<<endl;
			cin>>pagecount;
			sale::get_data();
		}
		void put_data(){
			publicant::	put_datatitle();
			publicant::putdata();
			cout<<"number of page is : "<<pagecount<<endl;	
			sale::put_data();
		}	
};
class tape:public publicant,public sale{
	float playingtime;
	public:
		void get_data(){
		publicant::	get_data();
			cout<<"tape playing time is :"<<endl;
			cin>>playingtime;		
			sale::get_data();	
		}
		void put_data(){
		publicant::putdata();
			cout<<"playing time is : "<<playingtime<<endl;
			sale::put_data();			
		}	
};
class disk:public publicant,public sale{
	string disktype;
	public:
		void get_data(){
			cout<<"enter disk type "<<endl;
			cout<<"Press C For CD type "<<endl;
			cout<<"Press D For DVD type "<<endl;
			cin>>disktype;
			publicant::get_data();
			sale::get_data();			
		}
		void putdata(){
			if(disktype=="c"){
				cout<<"it is CD type "<<endl;
			}
			else if(disktype=="d"){
				cout<<"it is DVD type "<<endl;
			}
			publicant::putdata();
			sale::put_data();
		}
};
int main(){
	tape t1;
	book b1;
	disk d1;
	cout<<"enter book details "<<endl;
	b1.get_data();
	cout<<"enter tape detais "<<endl;
	t1.get_data();
	cout<<endl;
	cout<<"Disk details : "<<endl;
	d1.get_data();
	cout<<"data for book : "<<endl;
	b1.put_data();
	cout<<endl;
	cout<<"data for tape : "<<endl;
	t1.put_data();
	cout<<"data for disk :"<<endl;
	d1.putdata();
}
