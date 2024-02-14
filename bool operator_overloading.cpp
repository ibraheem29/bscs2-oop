#include <iostream>
using namespace std;

class A
{
  int a;
  int b;	
 public:
  A(int c,int d)
{
	a=c;
	b=d;
}
  
  bool operator == (A obj)
  { 
    return  a == obj.a;
  }
  void display()
  {
  	cout<<a;
  }
};
int main()
{
	A c1(3,5),c2(6,7);
	cout<<c1=c2;
    
    return 0;
}
