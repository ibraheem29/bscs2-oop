#include <iostream>
using namespace std;

class student
{
 char name[12];
 string id;
 string session;
 int marks;
 public{
         void getdata()
         {
              cout<<"enter the name,id, sesion, marks"<<endl;
              cin>> n>>i>>s>>m ;
         }
         void putdata()
         {
             cout<<"name is "<< n <<endl;
             cout<<"id is "<< i <<endl;
             cout<<"session is"<< s <<endl;   
         }
       }
      
};     

int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    
    return 0;
}
