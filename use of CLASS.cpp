
/*Q5= Make a class notebook and 3 members book id,book name, book price, values in constructor & function display output.
 creat 2 object and their prices if sum is even display details of first book else 2nd book.
*/

#include <iostream>
using namespace std;
class notebook
{
  
  int book_id;
  string book_name;
  int book_price;
  public:
  	 notebook()
  	{
  	 	cout<< "enter the book name"<<endl;
  	 	cin>>book_name;
  	 	cout<< "enter the book id"<<endl;
  	 	cin>>book_id;
  	 	cout<< "enter the book price"<<endl;
  	 	cin>>book_price;
	}
 	
     void display()
     {
     	cout<<"your book name is : "<<book_name<<endl;
     	cout<<"your book id is : "<<book_id<<endl;
     	cout<<"your book price is : "<<book_price<<endl;
	 }
};
int main()
{
	
	cout<< " enter details of first book "<<endl;
	notebook n1;
	cout<<" "<<endl;
	notebook n2;
	cout<<" "<<endl;
	
	cout<<" details of first book "<<endl;
	n1.display(); 
	cout<< "  \n " <<endl;               
	cout << " details of 2nd book"<<endl;
	n2.display();
	
return 0;
} 











