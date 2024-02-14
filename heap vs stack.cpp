#include<iostream>
using namespace std;
 class XHO { 
 protected:
	int a; int b;
 public:
    XHO() {
    	
    	cout<<"XHO default"<<endl;
         a = 8, b = 7; 
		 }
		 
		 
	XHO(int x, int y) {
		cout<<"parent XHO execute"<<endl;
		a = x;
		 b = a;
		cout << b << endl; 
		cout << y << endl;
			}

	    
	    
	~XHO() {
		//cout<<"parent XHO delete"<<endl;
		cout << "V M" << endl;
		}

};
class HOX : public XHO
{
	private:
        int c;

	public:
 
	 HOX() {
	 	    //- 	7
			 
			cout<<"HOX executed default"<<endl;
            c = 4;
			a = a + c;
		
			}
 
 
	HOX(int a, int b, int c) : XHO(a, b) 
	{ 
	    cout<<"HOX executed"<<endl;
		cout << c+7 << endl;
	}
	
	~HOX() {
		cout << "S N" << endl;
		//cout<<"HOX deleted"<<endl;
	}

};






class HXO : public XHO,HOX
{
public:
	HXO() {
		cout<<"K L"<<endl;
			}


	HXO(char m) {
		cout << "S P" << endl;
		}
				
		~HXO() {
				cout << "X P" << endl;
				//cout<<"HXO deleted"<<endl;
			}

};



int main()
{
//	Case 1: using new and delete keyword
//	Whenever you create an object using new keyword:
//		1) The object is stored in heap memory
//		2) compiler will not delete this object automatically
//		but you have to delete it using delete keyword.
//	case 2: without using new and delete keyword
//	    1) The object is stored in stack memory
//	    2) compiler will automatically delete this object(call the
//		destructor) from the memory at the end of the program.
	
	HOX h1(3,4,5);
cout << "Mid" << endl; 
HXO h2('z');
 
XHO h3(9,8);

//HOX* h1 = new HOX(3,4,5);
//cout << "Mid" << endl; 
//HXO* h2 = new HXO();
// delete h1;
//XHO* h3 = new XHO(9,8);
//delete h2;

}
