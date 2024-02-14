# include <iostream>
using namespace std;
int main()
{
	
      int d1,d2,day;
	  int m1,m2,month;
	  int y1,y2,year;
      cout<< " Enter your Date of Birth  " <<endl;
      cin >> d1 >> m1 >>y1 ;
      cout<< "Enter current date "<<endl;
      cin >> d2 >> m2 >>y2 ;
      cout<< "======================================================================="<<endl;
      cout<< "                          your age is calculating .....                " <<endl;
      cout<< "======================================================================="<<endl;
      cout<< " "<<endl;
      year = y2-y1;
      
      if(m1 <= m2)
      {
      	month = m2 - m1;
	  }
	  else if(m2 < m1)
	  {
	  	year=year-1;
	  	m2 = m2 + 12 ;
	  	month = m2-m1 ;
	  }
	  
	  if(d1 <= d2)
      {
      	day = d2 - d1;
	  }
	  else if(d2 < d1)
	  {
	  	day=day-1;
	  	d2 = d2 + 30 ;
	  	day= d2-d1 ;
	  }
	  
	  cout<<"You are "<<year<<" years "<<month<<" months "<< "&" << day <<" days "<<endl;
	  
	  
	  return 0;
    }
