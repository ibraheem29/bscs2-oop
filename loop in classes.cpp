// Q3= make program in which a class name is player & members pname,pid, pteam. and also make 2 function to input and output data but also program wil be continue even when user wants. 
#include <iostream>
using namespace std;
class player
{
	string pname;
	string pteam;
	int    pid;
	float  page;
  public:
  	
		void in()
		{
			cout<< " enter your name " <<endl;
			cin>> pname;
			cout<< " enter your age" <<endl;
			cin>> page;
			cout<< " enter your id" <<endl;
			cin>> pid;
			cout<< " enter your team" <<endl;
			cin>> pteam;
		}
		
		
		void out()
		{
			cout<< " your name is " << pname <<endl;
			cout<< " your id is " << pid <<endl;
			cout<< " your age is " << page <<endl;
			cout<< " your team is " << pteam <<endl;
		}
		
};
int main()
{
	int x;
  do{
	player p1;
	p1.in();
	p1.out();
	
  cout<< "press 1 to continue" <<endl;
  cin>>x;
  }
	while(x==1);
	
	return 0;
} 
