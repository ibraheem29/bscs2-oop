#include <iostream>
using namespace std;
class Publication{
	string book;
	string audiocassette;
	float prices;
	public:
		Publication():book("\0"),audiocassette("\0"),prices(0.0)
		{
			
		}
		Publication():book(bk),audiocassette(at),prices(pr)
		{
			
		}
		int page_count()
		{
			page++;
		}
		int tape_up()
		{
			tape++;
		}
		string get_book()
		{
			return book;
		}
		string get_book()
		{
			return book;
		}
			string get_book()
		{
			return book;
		}
		void display()
		{
			cout<<"the book name is:"<<name;
			cout<<"the prices is:"<<prices;
		}
};
class book:public Publication
{
	
	
};
