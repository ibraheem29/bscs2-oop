#include <iostream>
using namespace std;
//Q1= write a program declare a class "marks" with 3 data members to store marks of 3 subjects & write 3 function

// in() to input details
// sum() to display sum of all marks
// avg() to calculate & return average 


class marks
{
  int english;
  int urdu;
  int math;        
 public:
  	void in() 
	{	
  	  cout<<"Enter english marks: "<<endl;
  	  cin>> english ;
  	  cout<<"Enter urdu marks: "<<endl;
  	  cin>> urdu;
  	  cout<<"Enter math marks: "<<endl;
  	  cin>>math;
	}
  	void sum()
  	{
  	int sum,s;
  	sum=english+urdu+math;
		cout<<"your obtained marks are:"<<sum<<endl;
		sum=s;
	} 	  	
    void avg()
    {
        float avg,s;
    	int total=300;
    	avg = s*100/total;
    	cout<<"your average grade is :" <<avg<<endl;
	}
};

int main()
{
	marks m1;
	m1.in();
	m1.sum();
	m1.avg();
	return 0;
} 
