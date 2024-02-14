#include<iostream>
#include<conio.h>
#include<unistd.h>     
using namespace std;

class animal {
protected:
    string name;
    string species;
    int age;

public:
    animal() {
        name = "";
        species = "";
        age = 0;
    }

    animal(string n, string s, int a) {
        name = n;
        species = s;
        age = a;
    }

    void displayinfo() {
        cout << "the name of animal : " << name << endl;
        cout << "the name of species : " << species << endl;
        cout << "the age of animal : " << age << endl;
    }
};

class enclosure : virtual public animal {
protected:
    string type;
    string list;
    int capacity;
    int cap;
    string typeofenclosure;

public:
    enclosure() : animal() {
        type = "";
        list = "";
        capacity = 0;
        
    }

    enclosure(string n, string s, int a, string t, string l, int c) : animal(n, s, a) {
        type = t;
        list = l;
        capacity = c;
    }
    void Addanimal() {
    	system("cls");
        cout << "Enter the name of animal :";
        cin >> name;
        cout << "Enter the species of animal :";
        cin >> species;
        cout << "Enter the type of animal : ";
        cin >> type;
        cout << "Enter the age of animal : ";
        cin >> age;
        cout<<"Enter the type of Enclosure : ";
        cin>>typeofenclosure;
        cout<<"Enter the Number of Animal you want to enter in enclosure : ";
        cin>>capacity;
        if(capacity<10){
        	cout<<"animal added "<<endl;
		}
		else{
			cout<<"Full "<<endl;
		}    
    }
    void displayenclosureinfo(){
    	//system("cls");
    	char c;
    	
    	cout << "the name of animal : " << name << endl;
        cout << "the name of species : " << species << endl;
        cout << "the age of animal : " << age << endl;
        cout << " the type of animal : "<<type<<endl;
        cout<<"type of enclosure : "<<typeofenclosure<<endl;
        cout<<"total number of animal added in enclosure : "<<capacity<<endl;
        sleep(6);
	}

   
};
class zookeeper:virtual public enclosure, public animal{
	protected:
		string namep;
		int assigned_en;
		string assigned_enclosure_type;
		public:
			zookeeper():enclosure(){
				namep="";
				assigned_en=0;
			}
			zookeeper(string n, string s, int a, string t, string l, int c,string np,int as):enclosure(n,s,a,t,l,c){
				namep=np;
				assigned_en=as;
			}
			void addzookeeper(){
				system("cls");
				cout<<"Enter the name of zookeeper : ";
				cin>>namep;
			}
			void assigned_enclosure(string enclosureType){
				system("cls");
				 assigned_enclosure_type = enclosureType;
				 cout << "Enter the type of enclosure to assign to the zookeeper: ";
				 cin>>assigned_enclosure_type;
				cout << "Enclosure type assigned to zookeeper " << namep << ": " << assigned_enclosure_type << endl;
				
			}
			void DisplayZooKeeperInfo(){
					system("cls");
				cout<<"Name of zookeeper : "<<namep<<endl;
				cout<<"type of enclosue they are assinged to : "<<assigned_enclosure_type<<endl;
				sleep(6);
			}
			
};
class zoo:virtual public zookeeper, virtual public enclosure{
	protected:
		int list_of_name;
		int list_of_enclosure;
		int list_of_zookeeper;
		enclosure ob;
		public:
			zoo():zookeeper(){
				list_of_name=0;
				list_of_enclosure=0;
				list_of_zookeeper=0;
			}
			void DisplayZooInfo(){
					system("cls");
				cout<<"\nZOO DETAILS...";
				displayenclosureinfo();
				DisplayZooKeeperInfo();
				
				
			}
			char menu(){
				char op;
				 cout << "\n1.ADD ANIMAL\n";
       			 cout << "\n2.ADD ZOOKEEPER\n";
       			 cout << "\n3.ASSIGNED ENCLOSURE\n";
       			 cout << "\n4.DISPLAY ENCLOSURE INFO\n";
       			cout << "\n5.DISPLAY ZOOKEEPER INFO\n";
       			cout << "\n6.DISPLAY ZOO INFO\n";
        		cin >> op;
        		return op;
			}
			
			
			
};
int main() {
    system("cls");
    char option;
    string enclosureType;
    enclosure a1;
    zookeeper z2;
    zoo z1;
    
    do{
    	system("cls");
        option = z1.menu();
        switch(option){
        	case '1':
          z1.enclosure::Addanimal();
        		break;
        	case '2':
			z1.addzookeeper();
			break;
			case '3':
		z1.assigned_enclosure(enclosureType);	
			break;
			case '4':
				z1.displayenclosureinfo();
				
				break;
			case '5':
			z1.DisplayZooKeeperInfo();
				break;
			case '6':
			z1.DisplayZooInfo();
			
			break;
			default:
            cout << "Invalid option. Please try again." << endl;	
		}
    	
	} while(option!='6');    
    return 0;
}

