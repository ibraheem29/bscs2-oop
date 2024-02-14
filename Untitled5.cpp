#include<iostream>
using namespace std;
class publication {
protected:
  string title;
  float price;
public:
	 void getdatatitle() {
    cout << "Enter title: ";
    cin >> title;
}
  void getdata() {
    cout << "Enter price: ";
    cin >> price;
  }
  void putdata() {
    cout<<"Price: "<<price<<endl;
  }
   void putdatatitle() {
    cout<<"Title: "<<title<<endl;
}
};

class book: public publication {
protected:
  int pgcount;
public:
  void getdata() {
    publication::getdatatitle();
    publication::getdata();
    cout<<"Enter page count: ";
    cin>>pgcount;
  }
  void putdata() {
    publication::putdatatitle();
     publication::putdata();
    cout <<"Page count: "<<pgcount<< endl;
  }
};

class tape: public publication {
protected:
  float play_time;
public:
  void getdata() {
    publication::getdata();
    cout<< "Enter playing time: ";
    cin>> play_time;
  }
  void putdata() {
    publication::putdata();
    cout << "Playing time: " <<play_time<< endl;
  }
};

int main() {
  book b;
  tape t;

  cout <<"Enter data for book:"<<endl;
  b.getdata();

  cout <<"Enter data for tape:"<<endl;
  t.getdata();
  cout<<endl;

  cout<<"Data for book:" <<endl;
  b.putdata();
cout<<endl;
  cout<<"Data for tape:"<<endl;
  t.putdata();

  return 0;
}
