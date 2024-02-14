#include <iostream>
using namespace std;

class Count {
   private:
    int value;
    int vector;

   public:

    // Constructor to initialize count to 5
    Count() : value(5), vector(6) {}
	 
	 //  by parameterized constructor
    //	count(int a)
   //	{ value = a; }  and int main "count c1(5);" or take value from user by cin.

// 1)  Overload "++" when used as prefix as void
    void operator ++ () {
        ++value;
    }
// 2) Overload "++" when used as postfix as void
    void operator ++(int){
    	value++;               //kisi k equal kr k output lena(class-type or other-type) or just is tarah hi output kr dena ,whats difference
	}
// 3) Overload "--" class-type operator using prefix
    Count operator -- () {
    	Count res;
		res.value = --value;
    	return res;
	}
// 4) Overload "--" class-type operator using postfix
    Count operator --(int) {
    Count ros;
	ros.value = value--;
    	return ros;
	}
// 5) Overload ">>" operator for print anything 
    string operator >>(string x) {
    	cout<< x;
    	return x;
	}

// -0-) Overload "+" operator 
    Count operator + (Count obj) {
    Count temp;
    temp.value = value + obj.vector;
    return temp;
}
    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1, count2,count3,count4;
    Count cont1,cont2,cont3,cont4,cont5;
    Count cot1,cot2,cot3,cot4,cot5,cot6;

// Call the void postfix "unray operator"
    count1++;
    count1.display();
    count2.display();
//call the void prefix function
    ++count3;
    count3.display();
    count4.display();  
    
// call the class-type operator "--" prefix 
    --cont1;
    cont1.display();
	cont2 = --cont1;
    cont2.display();
//call the class-type operator "--" postfix 
    cont4 = cont3--;
    cont4.display();   // function decrement hi nhi kr raha..  but solution is given below i think so,
    cont3--;
    cont3.display();
    
// call the void binary operator 
  
// call the class-type binary operator "+"
   cot1 = cot2 + cot3;
   cot1.display(); 
//                     binary operator ">"
   
    

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
