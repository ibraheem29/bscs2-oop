#include<iostream>
using namespace std;
class ship {
public:
    string name;
    string year;
    ship() {
    }
  virtual  void setinfo() {
        cout<< "Enter the name of the ship: "<<endl;
        cin>>name;
        cout<< "Enter the year the ship was made: "<<endl;
        cin>>year;
    } 
    void getinfo() {
        cout<<"Name of the ship is "<<name<<endl;
    }
    void getyear() {
        cout<<"The year in which it was made is " <<year<<endl;
    }
    virtual void print() {
        getinfo();
        getyear();
    }
};
class cruiseship : public ship {
public:
    int pes;

    cruiseship() {
    }
     void setinfo() {
        cout<< "Enter the name of the ship: "<<endl;
        cin>>name;
        cout<< "Enter the year the ship was made: "<<endl;
        cin>>year;
           cout << "Enter the number of maximum passengers: " << endl;
        cin >> pes;
    } 
   
    void getcinfo() {
        cout << "Maximum number of passengers is " << pes << endl;
    }
    void print() {
        getinfo();
        getcinfo();
    }
};
class cargoship : public ship {
public:
    int ton; 

    cargoship() {
    }
    void setinfo() {
        cout<< "Enter the name of the ship: "<<endl;
        cin>>name;
        cout<< "Enter the year the ship was made: "<<endl;
        cin>>year;
        cout << "Enter the number of maximum tonnage: " << endl;
        cin >> ton;
    } 
    
    void tongetinfo() {
        cout << "Maximum tonnage is " << ton << endl;
    }

    void print() {
        getinfo();
        tongetinfo();
    }
};

    int main() {
    int array = 3;
    ship* ships[array];

    ships[0] = new ship;
    ships[0]->setinfo();

    ships[1] = new cruiseship;
    ships[1]->setinfo();
  
    ships[2] = new cargoship;
    ships[2]->setinfo();
    
    for (int i = 0; i < array; ++i) {
        ships[i]->print();
    }

    return 0;
}
