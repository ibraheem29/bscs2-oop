#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std; 

class costumer{
	 public:
    costumer()
    {
	cout<<setw(50);
    cout<<"AL-RAZA RESTURENT "<<endl;
	cout<<setw(50); 
	cout<<"Sultan Town Lahore"<<endl;
	cout<<setw(50);
	cout<<"-------------------"<<endl;
	}
	  
void take_order()
{
	
ofstream myfile;
myfile.open("file1.txt");

	int n; 
	cout <<"press 1 to take order............. "<<endl; 
	cin>>n;
	while ((n>1)||(n<1))
	{			
		cout <<"This is the Invalid Number. so press 1 to take order..........  "<<endl;	
		cin>> n;		
			
	}
myfile << " This is resurant management system "<<endl;
if(n==1) 
{
	 int h;
  while (h<1 || h>5)
  {
	          
	
   cout<<"Welcome to the AL-Raza Resturent.......... "<<endl; 
	

    cout<<setw(50);
	cout<<"MENU CARD  "<<endl;
	cout<<setw(50); 
	cout<<"----------- "<<endl;
	
	string menu[5];
	menu[0]={"1) Bar.B.Q"};
	menu[1]={"2) Fish"};
	menu[2]={"3) Rolls"};
	menu[3]={"4) Fast Food"};
	menu[4]={"5) Ice Cream"}; 
	 
for(int i=0; i<5; i++)
{
	cout<<menu[i]<<endl; 
}


  cout <<"Chose the type of order which you like to order "<<endl; 
  cin>>h;
}
char z;
cout<<"Want to buy more....."<<endl; 
cin >>z;
cout <<z<<endl; 
if (z=='y')
{




	

  switch (h)
  {
  	    case 1:
  	    	
  		cout <<"Bar.B.Q"<<endl;
		    
  		int a; 
  		cout<<"Which dish would you want to try "<<endl;
  		cout<<"1) Chicken Behari Boti"<<setw(10)<<"Rs.500 "<<endl;
		cout<<"2) Chicken Malai Boti "<<setw(10)<<"Rs.600 "<<endl;    
        cout<<"3) Chicken Tikka Boti "<<setw(10)<<"Rs.200 "<<endl;    
        cout<<"4) Beef Behari Boti   "<<setw(10)<<"Rs.490 "<<endl;    
        cout<<"5) Afghani Boti       "<<setw(10)<<"Rs.450 "<<endl;    
        cout<<"6) Mutton Chops       "<<setw(10)<<"Rs.750 "<<endl;    

  		cin>>a;
  		switch(a)
		{
			    case 1:
				cout<<"Chicken Behari Boti "<<endl; 
				break; 
				
				case 2:
				cout<<"Chicken Malai Boti "<<endl; 
				break; 


                case 3:
				cout<<"Chicken Tikka Boti "<<endl; 
				break; 


                case 4:
				cout<<"Beef Behari Boti "<<endl; 
				break; 


                case 5:
				cout<<"Afghani Boti "<<endl; 
				break; 


                case 6:
				cout<<"Motton Chops "<<endl; 
				break; 
				
				
		        default:
		        cout <<"invalid Number"<<endl; 
				break;
		 } 
	
  		break; 
  		case 2:
  		cout<<"Fish"<<endl;
			int b; 
  		cout<<"Which dish would you want to try "<<endl;
  		cout<<"1) Finger Fish  "<<setw(10)<<"Rs.450 "<<endl;
		cout<<"2) Grilled Fish "<<setw(10)<<"Rs.550 "<<endl;    
        cout<<"3) Fish Handi   "<<setw(10)<<" Rs.1000 "<<endl;    
        
  		cin>>b;
  		switch(b)
		{
	            case 1:
				cout<<"Finger Fish "<<endl; 
				break; 
			
			   case 2:
			   	cout <<"Grilled Fish "<<endl; 
			   	break;
			   	
			   	case 3:
			   	cout<<"Fish Handi"<<endl; 
			    break;
			    
			    default:
		        cout <<"invalid Number"<<endl; 	
				break;		
	    }
		break; 
		case 3:
		cout<<"Rolls"<<endl;
		int c; 
  		cout<<"Which dish would you want to try "<<endl;
  		cout<<"1) Chicken Roll        "<<setw(10)<<"Rs.100 "<<endl;
		cout<<"2) Chicken cheese Roll "<<setw(10)<<"Rs.120 "<<endl;    
        cout<<"3) Chicken Mayo Roll   "<<setw(10)<<"Rs.120 "<<endl;    
        cout<<"4) Beef Roll           "<<setw(10)<<"Rs.100 "<<endl;    
        cout<<"5) Beef Mayo Roll      "<<setw(10)<<"Rs.120 "<<endl;    
        cout<<"6) Gyro                "<<setw(10)<<"Rs.160 "<<endl;    

  		cin>>c;
  		switch(c)
		{
case 1:
				cout<<"Chicken Roll"<<endl; 
				break; 
			
case 2:
				cout<<"Chicken Cheese Roll "<<endl; 
				break; 
			
case 3:
				cout<<"Chicken Mayo Roll"<<endl; 
				break; 
			
case 4:
				cout<<"Beef Roll"<<endl; 
				break; 
			
case 5:
				cout<<" Beef Mayo Roll"<<endl; 
				break; 
			
case 6:
				cout<<"Gyro"<<endl; 
				break; 
			
		default:
		cout <<"invalid Number"<<endl; 	
		break;
		
}
		break;  
		case 4:
		cout <<"Fast Food"<<endl;
		int d; 
		cout <<"Which dish would you want to try?" << endl;
				cout <<"1) Chicken Burger           "<<setw(10)<<"Rs.170" << endl;
				cout <<"2) Chicken Cheese Burger    "<<setw(10)<<"Rs.200" << endl;
				cout <<"3) Crispy Zinger Burger     "<<setw(10)<<"Rs.230" << endl;
				cout <<"4) Smoky Beef Burger        "<<setw(10)<<"Rs.180" << endl;
				cout <<"5) Beef Cheese Burger       "<<setw(10)<<"Rs.210" << endl; 
				cout <<"6) Grilled Chicken Sandwich "<<setw(10)<<"Rs.240" << endl;
				cout <<"7) Club Sandwich            "<<setw(10)<<"Rs.250" << endl;
				cout <<"8) Mexican Sandwich         "<<setw(10)<<"Rs.300" << endl;
           cin>>d;
           switch(d)
           {
case 1:
				cout<<"Chicken Burger"<<endl; 
				break; 

case 2:
				cout<<"Chicken Cheese Burger"<<endl; 
				break; 

case 3:
				cout<<"Crispy Zinger Burger"<<endl; 
				break; 

case 4:
				cout<<"Smoky Beef Burger"<<endl; 
				break; 

case 5:
				cout<<"Beef Cheese Burger"<<endl; 
				break; 

case 6:
				cout<<"Grilled Chicken Sandwich"<<endl; 
				break; 

case 7:
				cout<<"Club Sandwich"<<endl; 
				break; 

case 8:
				cout<<"Mexican Sandwich"<<endl; 
				break; 
			
		default:
		cout <<"invalid Number"<<endl; 	
		break;

		   }
		break;  
		case 5: 
		cout<<"Ice Cream"<<endl; 
		
			int e; 
  		cout<<"Which Flavor would you want to try "<<endl;
  		cout<<"1)  Mango Flavor       "<<setw(10)<<"Rs.250 "<<endl;
		cout<<"2) Strawberry Flavor   "<<setw(10)<<"Rs.200 "<<endl;    
        cout<<"3) Chocolate Flavor    "<<setw(10)<<"Rs.270"<<endl;    
        
  		cin>>e;
  		switch(e)
		{
	        case 1:
				cout<<"Mango Flavor"<<endl; 
	            break;
				
           case 2:
				cout<<"Strawberry Flavor"<<endl; 
	            break;

           case 3:
				cout<<"Chocolate Flavor"<<endl; 
	            break;
				
		   default: 
				cout<<"Invalid Number "<<endl; 
				break;
	}
		break; 
		default:
		cout <<"invalid Number"<<endl;
		cin>>h;
		break;
}
}
//........................
}
}
	~costumer()
	{
		//this is the distrouctor of class costumer  ............
	}
};
class user:public costumer
{
	private:
		string name; 
		int houseno;
		string area;
		string city; 
		int phoneno;
		public:
			user()
			{
				//default constrouctor............
			}
			user(string name,int houseno,string area,string city,double phoneno)
			{
		this->name=name; 
		this->houseno=houseno;
		this->area=area;
		this->city=city; 
		this->phoneno=phoneno;
			}
			
			void user_detail(void)
			{
				cout<<endl;
				cout<<"Enter your Details "<<endl; 
				cout<<"Enter Name"<<endl; 
				cin>>name; 
				cout<<"Enter House NO "<<endl; 
				cin>>houseno;
				cout<<"Enter Area "<<endl; 
				cin>>area; 
				cout<<"Enter City "<<endl; 
				cin>>city; 
				cout<<"Phone Number "<<endl;
				cin>>phoneno;
				} 
 void Display_costumer_data()
{
	cout<<name<<" your order will be delievered within 45 mins at " <<","<<houseno<<","<<area<<","<<city<<","<<phoneno<<endl;
	}				 
	~user()
	{
	// this is the destoructor of class user .............
	}
			
		
};
int main()
{
	
	user* u1 = new user();
	u1->take_order(); 	  
	u1->user_detail();
	u1->Display_costumer_data();
	delete u1;
		return 0;
} 
