#include <iostream>
using namespace std;

class Count {
   private:
    int value;
    int vector;
   public:

    // Constructor to initialize count to 5
    Count(int v=15,int r=8)  {
	 value = v;
	 vector = r;
	}

    // Overload ^ using string
    string operator ^ (string x) {
       //cout<< x;
       return x;       
    }
    // overload using clss-type
    bool operator > (Count obj) {
    	Count res;
    	return value > obj.vector;
    	
	}
    
   // Overload ++ when used as postfix
    void operator ++(){
    	++value;
	}

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count c1,c2,c3,c4,c5;
    c1^"pakistan";
     ++c2;
     c2.display();
    
   c5 = c3 > c4   ;
    c5.display();

// int a = 10, b = 0;
//  a = b++; // a = b; // b =  b + 1;
//  a = ++b; // b = b + 1 // a = b;
//  int arr[10];
//  arr[0] = 5;
//  arr[1] = 10;
//  arr[2] = 15;
//  arr[3] = 20;
//  //cout<<arr[b++];// arr[b]; // b = b+1;
//  cout<<arr[++b];
 
    return 0;
}
