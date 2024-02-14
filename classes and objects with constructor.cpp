#include <iostream>
using namespace std;

class Account
{
	string accno;
	string acctitle;
	double amount;
	char acctype[8];
 public:
 	Account()
 	{
 		
	}
	Account(string accno,string acctitle,double amount,char acctype) 
	{
//		this->accno=accno;
//		this->acctitle=acctitle;
//		this->amount=amount;
//		this->acctype=acctype;
	}
	Account(const Account &)
	{
	
	}
	void deposit ()
	{
		cout<< "" << endl;
	  double depos;
	  cout << "enter your amount you want to deposit"<<endl;
	  cin >> depos;	
	  amount=amount+depos;
	}
	void withdraw()
	{
		cout<< "" << endl;
	  double wthdrw;
	  cout<<"enter your amount you want to withdraw"<<endl;
	  cin >> wthdrw;
	  amount=amount-wthdrw;
	}
	void changeType()
	{
		cout<< "" << endl;
	   cout<<"Now, choose your new account type  "<<endl;
	   	cout<<"---------------------------------------"<<endl;
		cout<<"          Asaan   Account " <<endl;
		cout<<"         Current Account" <<endl;
		cout<<"        Saving  Account" <<endl;
		cout<<"       Digital Account" <<endl;
		cout<<"---------------------------------------"<<endl;
	   cin>> acctype;
	}
	void checkBalance()
	{
		cout<< "" << endl;
		int c_balance;
	    c_balance = amount;
		cout<< " your current balance is: " << c_balance <<endl;
		cout<< "        " << endl;
	}
	void displayAccountinfo()
	{	
	    cout<< "" << endl;
		cout<<"-----------------------"<<endl
		<<"-----------------------"<<endl;
		cout<<"Acount Number "<<accno<<endl
		<<" Account title :"<<acctitle<<endl
		<<"Acount Type: "<<acctype<<endl
		<<"Amount: "<<amount<<endl;	
		cout<<"-----------------------"<<endl
		<<"-----------------------"<<endl;
	}
	void setAccNo()
	{
		
		cout<<" what is the account number? "<<endl;
		cin >> accno;
    }
	void setAccTitle()
	{
		cout<<  ""  << endl;
		cout<<" what is the account name? "<<endl;
		cin>> acctitle;
	}
	void setamount()
	{
		cout<<  " "<< endl;
		cout<<" enter your first amount to open the account "<<endl;
		cin>> amount;
    }
	void setAccType()
	{
		cout<< " "  << endl;
		cout<<" which account`s type you want to choose? "<<endl;
		cout<<"---------------------------------------"<<endl;
		cout<<"         Asaan   Account " <<endl;
		cout<<"         Current Account" <<endl;
		cout<<"         Saving  Account" <<endl;
		cout<<"         Digital Account" <<endl;
		cout<<"---------------------------------------"<<endl;
		cin>> acctype;
	}
	void getAccNo()
	{
		cout<<" your account number is " <<accno <<endl;
	}
	void getAccTitle()
	{
		cout<<" your account name is " <<acctitle<<endl;
	}
	void getAccType()
	{
		cout<<"your account type is " << acctype <<endl;
	}
	void getAmount()
	{
		cout<<"your current amount is :  "<< amount <<endl; 
	}
	
	~Account()
	{
		
	}	
 
};

int main()
{
  Account a1;
  a1.setAccNo();
  a1.setAccTitle();
  a1.setAccType();
  a1.setamount();
  a1.checkBalance();
  a1.deposit();
  a1.withdraw();
  a1.checkBalance();
  a1.changeType();
   a1.displayAccountinfo();
  	
Account a2;
a2=a1;
a2.deposit();

a1.displayAccountinfo();
a2.displayAccountinfo();

 
	
 return 0;	
}




