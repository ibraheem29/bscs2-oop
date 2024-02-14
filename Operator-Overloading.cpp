#include <iostream>
using namespace std;
class Cube
{
	double lenght;
	double height;
	double width;
	
  public:
   Cube() {}
   	
   Cube(double l, double h, double w) 
   {
   	 lenght=l;
   	 height=h;
   	 width=w;
   }
   
   void display()
   {
   	 cout<<"lenght: "<<lenght  <<endl;
   	 cout<<"height: "<<height  <<endl;
   	 cout<<"width: "<<width  <<endl;
   }
   
   Cube operator + (Cube x)
   {
     Cube res;
     res.lenght = lenght + x.lenght;
     res.height = height + x.height;
     res.width = width + x.width;
     return res;
   }
   Cube operator - (Cube y)
   {
     Cube res;
     res.lenght = lenght - y.lenght;
     res.height = height - y.height;
     res.width = width - y.width;
     return res;	
   }
   Cube operator * (Cube z)
   {
     Cube res;
     res.lenght = lenght * z.lenght;
     res.height = height * z.height;
     res.width = width * z.width;
     return res;
   }
   Cube operator / (Cube v)
   {
     Cube res;
     res.lenght = lenght / v.lenght;
     res.height = height / v.height;
     res.width = width / v.width;
     return res;	
   }
   void operator = (Cube n)
   {
      lenght = n.lenght ;
      height = n.height;
      width = n.width; 	
   }
   bool operator == (Cube b)
   {
     return ((lenght == b.lenght) && (height == b.height) && (width == b.width));  	
   }	

};

int main()
{
  Cube c1(2,3,4),c2(4,5,6),c3 ;
  
  c3 = c1 + c2 ;
  c3.display();
  
 /* c3 = c1 - c2;
  c3.display();
  
  c3 = c1 * c2;
  c3.display();
  
  c3 = c1 / c2;
  c3.display();
  
  c1 = c2;
  c1.display();
  
  c1 == c2;
  c1.display();*/
  	
}
