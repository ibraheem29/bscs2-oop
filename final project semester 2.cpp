#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class MAIN
{
  private:
	string M;	
  public:
	
    void Main_Menu()
    {
	
	system("cls");
	cout << "\n\n  ^^^^^^^^^^^^^^^^^^ Main Menu ^^^^^^^^^^*^^^^^^^^ \n";
	cout << "\n\t 1. Add New Medicine ";
	cout << "\n\t 2. Display Medicines ";
	cout << "\n\t 3. Update Existing Medicine ";
	cout << "\n\t 4. Check Specific Medicine ";
	cout << "\n\t 5. Delete Medicine ";
	cout << "\n\t 6. Exit \n";
	
    }

	~MAIN()
	{
	}
};


class Medicine:public MAIN                 //Class for adding medicines
{
private:
	string med_name;
	float med_price;
	int med_stock;
public:
	Medicine()
	{
//	     med_name = 0;
//		med_price = 0.0;
//		med_name = " ";
	}
	Medicine(string mn, float mp, int ms)
	{
		med_name = mn;
		med_price = mp;
		med_stock = ms;
	}

	void addmedicine()  //Function For Adding Medicines
	{
		system("cls");
		ofstream file;
		file.open("medicine.txt", ios::app);
		cout << "\n ******************** ADD NEW MEDICINE ******************** ";
		cout << "\n Medicine Name : ";
		cin >> med_name;
		cout << "\n Medicine Price : ";
		cin >> med_price;
		cout << "\n Stock Left : ";
		cin >> med_stock;
		file << med_name << endl;
		file << med_price << endl;
		file << med_stock << endl;
		file.close();
	}
	void display_medicines()// Function For Displaying Medicines
	{
		system("cls");
		ifstream file;
		int med_stock;
		float med_price;
		string med_name;
		cout << "\n\n ******************* DISPLAY MEDICINES *********************" ;
		file.open("medicine.txt");
		if (!file)
		{
			cout << "\n\n File Openning Error...!!!";
		}
		else
		{
			cout << "\n\n*****MEDICINE INFORMATION*****\n\n";
			file >> med_name;
			file >> med_price;
			file >> med_stock;
				cout << "   Medicine Name\t\t" ;
				cout << " Medicine Price\t\t" ;
				cout << " Medicine Stock\n    ";
			do
			{
				cout << med_name << " \t\t\t  " ;
				cout << med_price <<" \t\t\t  " ;
				cout << med_stock << " \n    ";
				file >> med_name;
				file >> med_price;
				file >> med_stock;
			} while (!file.eof());
		}
		file.close();
	}
	void search_medicine()//Function To Search Stored Medicine
	{
		system("cls");
		ifstream file;
		int med_stock, count = 0;
		string med_name, med_price, med1_name;
		cout << " \n\n****************** SEARCH SPECIFIC  MEDICINE **********************" ;
		file.open("medicine.txt");
		if (!file)
		{
			cout << " \n\n File Openning Error...";
		}
		else
		{
			cout << " \n\n Medicine Name : ";
			cin >> med1_name;
			file >> med_name >> med_price >> med_stock;
			while (!file.eof())
			{
				if (med1_name == med_name)
				{
					system("cls");
					cout << "\n\n\t\t\t\tSearch Specific store Medicine";
					cout << "\n\n Medicine Name : " << med_name << endl;
					cout << "\n\n\Medicine Price : " << med_price << endl;
					cout << "\n\n\Medicine Stock : " << med_stock << endl;
					count++;
					break;
				}
				file >> med_name >> med_price >> med_stock;
			}
			file.close();
			if (count == 0)
			{
				cout << "\n\n Sorry...!!Medicine Not Found...!";
			}
		}
	}
	void update_medicine_rec()  //Function For Updating Medicine Record
	{
		system("cls");
		ofstream  file1;
		file1.open("medicine1.txt", ios::app);
		ifstream searchmedicine;
		searchmedicine.open("medicine.txt");
		string med_name, user_input;
		float med_price;
		int med_stock;
		int  count = 0;
		cout << "**Update Medicine's Record**" << endl;
		cout << "ENTER MEDICINE NAME  :";
		cin >> user_input;
		if (!searchmedicine)
		{
			cout << "\n\n File Openning Error...";
		}
		else
		{
			while (!searchmedicine.eof())
			{
				searchmedicine >> med_name;
				searchmedicine >> med_price;
				searchmedicine >> med_stock;
				if (user_input == med_name && !searchmedicine.eof())
				{
					cout << "**Update Medicine Record**" << endl;
					cout << "MEDICINE NAME :";
					cin >> med_name;
					file1 << med_name << endl;
					cout << "MEDICINE PRICE:";
					cin >> med_price;
					file1 << med_price << endl;
					cout << "STOCK OF MEDICINE :";
					cin >> med_stock;
					file1 << med_stock << endl;
					count++;
				}
				if (user_input != med_name && !searchmedicine.eof())
				{
					file1 << med_name << endl;
					file1 << med_price << endl;
					file1 << med_stock << endl;
				}
			}
			if (count == 0)
			{
				cout << "\n\nThere Is No Medicine Of This Name...";
			}

			searchmedicine.close();
			file1.close();
			remove("medicine.txt");
			bool flag = rename("medicine1.txt", "medicine.txt");
		}
	}
	void delete_medicine() //functiom for delete any medicine
	{
		system("cls");
		ifstream file;
		int med_stock, count = 0;
		string med_name, med_price, med1_name, option ;
		cout << " \n\n****************** DELETE  MEDICINE **********************" ;
		file.open("medicine.txt");
		if (!file)
		{
			cout << " \n\n File not exist...";
		}
		else
		{
			cout<<"\n\n Enter the medicine which you want to delete "<<endl;
			cout << "\n   Medicine Name : ";
			cin >> med1_name;
			file >> med_name >> med_price >> med_stock;
			while (!file.eof())
			{
				if (med1_name == med_name)
				{
					system("cls");
					cout << " \n\n****************** DELETE  MEDICINE **********************" ;
					cout << "\n\n\t\t Are you select this Medicine ";
					cout << "\n\n Medicine Name : " << med_name << endl;
					cout << "\n\n\Medicine Price : " << med_price << endl;
					cout << "\n\n\Medicine Stock : " << med_stock << endl;
					count++;
					break;
				}
				
			cout<<" Are you sure to delete this item. (y/n) ";
			cin>> 	option;
//			if(option == "y" )
//			{
//			  	
//			}
				file >> med_name >> med_price >> med_stock;
			}
			file.close();
			if (count == 0)
			{
				cout << "\n\n Sorry...!!Medicine Not Found...!";
			}
		}
	}
			
	~Medicine()
	{
		
	}

};

class Customer
{
//  string stock;
//  int price;
  string name; 
  string CNIC_Number;
  int Contact_Number;
  string Address;
  
  public:
  	//Customer();
  	void main_menu()
  	{
  		cout<<" 1) DETAILS \n",
  		cout<<" 2)view details \n",
  		cout<<" 3) Exist \n" ;
  		
	}
  	
   void detail()
   {
   	ofstream myfile;
    myfile.open("customer.txt");
    
   	 cout<<"Enter your name:"<<endl;
   	 cin>> name;
   	 myfile << name;
   	 cout <<"Enter your CNIC Number : "<<endl; 
   	 cin>>CNIC_Number;
   	 myfile << CNIC_Number ;
   	 cout <<"Enter your contact Number : "<<endl; 
   	 cin>>Contact_Number; 
   	 myfile << Contact_Number ;
   	 cout <<"Emter the address : "<<endl; 
   	 cin>>Address; 
   	 myfile << Address ;
   	 
   	 
     myfile.close();
   }
   
   void display_details()
   {
   	ifstream myfile;
    myfile.open("customer.txt");
    myfile >> name , CNIC_Number, Contact_Number, Address ;
    
    if (!myfile)
		{
			cout << "\n\n File Openning Error...!!!";
		}
		else
		{
			cout << "\n\n*****CUSTOMER INFORMATION*****\n\n";
			myfile >> name;
			myfile >> CNIC_Number;
			myfile >> Contact_Number;
			myfile >> Address;
			
				cout << "   Customer Name\t\t" ;
				cout << " CNIC Number\t\t" ;
				cout << " Contct Number \t\t";
				cout << " Customer Address \n   ";
			do
			{
				cout << name << " \t\t\t  " ;
				cout << CNIC_Number <<" \t\t\t  " ;
				cout << Contact_Number << " \t\t\t   ";
				cout << Address << " \n " ;
				
			myfile >> name;
			myfile >> CNIC_Number;
			myfile >> Contact_Number;
			myfile >> Address;
				
			} while (!myfile.eof());
		}
    
    myfile.close();
   }
   
   void exist()
   {
   	 	cout << endl << " Thanks for visiting!!!" << endl;
			exit(0);  //This command will End the whole program
   }
   ~Customer()
   {
   	
   }
};

int main()
{
    MAIN m1 ;
    
    cout<<"                        ****************************************************************************\n";
    cout<<"                                                     MEDICAL STORE MANAGEMENT                       \n ";
    cout<<"                        ****************************************************************************\n\n";
    
     cout<<" Select your status, So you goto your choice  \n";
	   
	   string M;
	   cout << "\n\t\t CUSTOMER ";
	   cout << " " ;
	   cout << "\n\t\t DEALER \n\n";
	   cout << " ";
	   cout<<"Enter your status:";
	   cin >> M ;
       system("CLS");
	  

     
	if(M == "customer" || M == "Customer" || M == "C" || M == "c" || M == "1")
	{
	  Customer c1;
	  c1.main_menu();
	  cout<<"Enter your choice: ";
  		string v;  cin>>v;
	
	  system("cls");
	  if(v == "1")
	  {
	    	c1.detail();
	  cout<<" Goto Main Menu (y\n) :";
   	 string x;
   	 cin>> x;

	  if (x == "y")
			{
				c1.main_menu();
			}
	   else
	    c1.exist;
	else if(v == "2")
    {
    	c1.display_details();
    	cout<<" Goto Main Menu (y\n) :";
   	 string x;
   	 cin>> x;

	  if (x == "y")
			{
				c1.main_menu();
			}
	   else
	    c1.exist;
    	
			}		
	else
	  	{
	  		c1.exist;
		  }
	  system("cls");
	  
	
	}

	else if(M == "dealer" || M == "Dealer" || M == "2" || M == "d" )
   {	
   Medicine* m = new Medicine;		
	int choice, a;
	char x, check;
	do
	{
	    m1.Main_Menu();
		cout << "\n\nEnter Your Choice : ";
		cin >> choice;
		if (choice == 1)
		{
			do
			{
				m->addmedicine();
				cout << "Do you want to add a medicine?(y/n) : ";
				cin >> x;
			} while (x == 'y');
		}
		if (choice == 2)
		{
			m->display_medicines();
			cout << " Go To Main Menu (y) : ";
			cin >> x;
			if (x != 'y')
			{
				choice = 6;
			}
		}
		if (choice == 4)
		{
			m->search_medicine();
			cout << " Go To Main Menu (y) : ";
			cin >> x;
			if (x != 'y')
			{
				choice = 6;
			}
		}
		if (choice == 3)
		{
			m->update_medicine_rec();
			cout << " Go To Main Menu (y) : ";
			cin >> x;
			if (x != 'y')
			{
				choice = 6;
			}
		}
		if (choice == 5)
		{
			m->delete_medicine();
			cout << " Go To Main Menu (y) : ";
			cin >> x;
			if (x != 'y')
			{
				choice = 6;
			}
		}
		if (choice == 6)
		{
			cout << endl << " Thanks for visiting!!!" << endl;
			exit(0);  //This command will End the whole program
		}
	}
	 while (choice != 6);
        
        delete m;

}
	else
	{
	   cout<<"Invalid input. try again \n";
	   cin>> M;
	}








  return 0;
}

