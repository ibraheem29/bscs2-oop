/* write a c++ programe to create a class a class called book with attribute of title author cost
isbn . make two example of book val must be taken from user.and for display value
class function,create an other function in which cost of purchase book is calculated
20% discount is applicable on each purchased book.
*/
#include<iostream>
using namespace std;
class Book{
	public:
		string title,author;
		int cost,isbn;
		
		void display(){
			cout<<"The title of book is :"<<title<<endl;
			cout<<"The author of book is :"<<author<<endl;
			cout<<"The isbn of book is :"<<isbn<<endl;
			cout<<"The cost of book is :"<<cost<<endl;

		}
		void cal(){
			int amount;
			amount=cost-20;
			cout<<"the final cost of book is :"<<amount<<endl;
		}
};

int main(){
	Book obj;
	cout<<"Enter the book title :";
	cin>>obj.title;
	cout<<"Enter the book author :";
	cin>>obj.author;
	cout<<"Enter the book isbn :";
	cin>>obj.isbn;
	cout<<"Enter the book cost :";
	cin>>obj.cost;
	obj.display();
	obj.cal();
	cout<<endl;
	Book obj1;
	cout<<"Enter the book title :";
	cin>>obj1.title;
	cout<<"Enter the book author :";
	cin>>obj1.author;
	cout<<"Enter the book isbn :";
	cin>>obj1.isbn;
	cout<<"Enter the book cost :";
	cin>>obj1.cost;
	obj1.display();
	obj1.cal();	
	
}
