#include <iostream>
using namespace std;
class publication {
private:
    string title;
    float price;
public:
	void getdatatitle(){
        cout<<"Enter title:";
        cin>>title;
    }
      void getdata(){
    
        cout<<"Enter price:";
        cin>>price;
    }
     void putdatatitle() {
        cout<< "\nTitle: "<<title<<endl;
    }
    void putdata() {

        cout<< "Price: "<<price<<endl;
    }
};
class sales {
private:
   float sales_figures[3];
public:
    void getdata() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter sales figure for month " << i + 1 << ": ";
            cin >> sales_figures[i];
        }
    }

    void putdata() {
        cout << "\nSales figures:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Month " << i + 1 << ": " << sales_figures[i] << endl;
        }
    }
};

class book : public publication, public sales {
private:
    int page_count;

public:
    void getdata() {
    	publication::getdatatitle();
        publication::getdata();
        cout << "Enter page count: ";
        cin >> page_count;
        sales::getdata();
    }

    void putdata() {
    	publication::putdatatitle();
        publication::putdata();
        cout << "Page count: " << page_count << endl;
        sales::putdata();
    }
};

class tape : public publication, public sales {
private:
    float playing_time;

public:
    void getdata() {
        publication::getdata();
        cout << "Enter playing time: ";
        cin >> playing_time;
        sales::getdata();
    }

    void putdata() {
        publication::putdata();
        cout << "Playing time: " << playing_time << endl;
        sales::putdata();
    }
};

int main() {
    book book1;
    tape tape1;

    cout << "\nEnter book data:" << endl;
    book1.getdata();

    cout << "\nEnter tape data:" << endl;
    tape1.getdata();

    cout << "\nBook data:" << endl;
    book1.putdata();

    cout << "\nTape data:" << endl;
    tape1.putdata();

    return 0;
}
