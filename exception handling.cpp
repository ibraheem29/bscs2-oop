#include<iostream>
using namespace std;

int main()
{
	
int value1;
double value2;
cout<<"enter two numbers:"<<endl;
cin>> value1 ;
cin>> value2;

	try {
		if(value1 < 0)
		{
			throw(string)"error";
		}	
	}
	catch(string)
	{
		cout<<"number is negative, system cannot granted\n" ;
	}
	
	try{
		if(value2 == 0)
		{
			throw(string)"error";
		}	
	}
	catch(string)
	{
		cout<<"value2 is zero, system cannot granted \n";
	}
	
	

	double n = value1+value2;
	cout<< n;
	
	try{
		if(n > 20)
		{
			throw(string)"error";
		}	
	}
	catch(string)
	{
		cout<<"sum is greater than 20, system cannot granted";
	}
	
	double m = value1*value2;
	try{
		if(m > 20)
		{
			throw(string)"error";
		}	
	}
	catch(string)
	{
		cout<<"product is greater than 20, system cannot granted";
	}
	cout<< m;
	
	
	double f = value1/value2;
	try{
		if(f ?  0)
		{
			throw(string)"error";
		}	
	}
	catch(string)
	{
		cout<<"number is negative, system cannot granted";
	}
	
	double k= value1%value2;



catch(string)
{
   cout<<"this is default catch function ";
}
 return 0;
}


