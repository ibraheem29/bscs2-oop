#include <iostream>
using namespace std;

class XHO{
	protected:
		int a;
		int b;
	public:
	XHO(){
		a=8 , b=7;
		cout<<"number"<<endl;
	}	
	XHO(int x , int y)
	{
		a=x;
		b=a;
		cout<<b<<endl;
		cout<<y<<endl;	
	}
	~XHO(){
		cout<<"VM"<<endl;
	}
};

class HOX:public XHO{
	private:
			int c;
	public:
		HOX(){
			c=4;
			a=a+c;
			cout<<"G"<<endl;
		}
		HOX(int a, int b, int c):XHO(a,b){
			cout<<c+7<<endl;
		}
		~HOX(){
			cout<<"SN"<<endl;
		}	
	};

class HXO:public HOX,public XHO{
	public:
		HXO()
		{
			cout<<"KL"<<endl;
		}
		HXO(char m)
		{
			cout<<"SP"<<endl;
		}
		~HXO(){
			cout<<"XP"<<endl;
		}
};

int main() {
	HOX* h1=new HOX(3,4,5);
	cout<<"Mid"<<endl;
	HXO* h2=new HXO();
	delete h1;
	XHO* h3 = new XHO(9,8);
	delete h2;
	
	return 0;
}
