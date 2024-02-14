// Q2= make a class contain 2 data members valued 50 & 100 in constructor. a function product() that displays product of data members.//
#include<iostream>
using namespace std;

  class total
  {
  	int a;
  	int b;
  public:
  	total(int c, int d)
	{
	  a=c;
	  b=d;
	 // a = 50;
	// b = 100;
	}	
	
	void product()
	{
		int pro = a*b;
	  cout << " product of your values :"<< pro <<endl;
    }
	
  };
 int main()
 {
 	total t1(50,100);
 	t1.product();
}