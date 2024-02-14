#include <iostream>
using namespace std;
 
 class Garmet{
 	protected:
 	char name[20];
 	public:
 		void getName()
 		{
 			cout<< "enter your name: " <<endl;
			cin>> name; 	
    	}
		virtual void calculatePrice()=0;
		
	};
 class Upper:public Garmet
	{
	public:
		int collarSize;
		void calculatePrice()
		{
			cout<<" overriding upper "<<endl;
		}
		virtual void getCollarSize()=0;
		
	};
 class Lower:public Garmet
	{
	protected:
		int waist;
	public:
		
		void calculatePrice()
		{
			cout<<"overriding lower "<<endl;
		}
		virtual void getwaist()=0;
		
	};
	class Shirt:public Upper
	{
		public:
			
	    void getCollarSize()
	   {
		 cout<<"Enter the size os shirt: "<<endl;
		 cin>> collarSize;
	   }
	    int calculatePrice(int total_shirts)
		{
		  collarSize = collarSize-1;	
		  int price = collarSize*20+10;
		  int shirt_price=price *total_shirts;
		  cout<<" The price of shirt is :"<<shirt_price<<endl;
		  return shirt_price;
		}
};
	class Pajama:public Lower
	{
		public:
              
		void getwaist()
		{
			cout<<"Enter the waist of pajama: "<<endl;
			cin>> waist;
			waist=waist-2;
		}	     
		void calculateprice()
		{
		  int pajama_price=waist*15+50;
		  cout<<" The price of pajama is :"<<pajama_price<<endl;
		}
	
};
	class Trouser:public Lower
	{
		public:
		
		void getwaist()
		{
			cout<<"Enter the waist of trouser: "<<endl;
			cin>> waist;
			waist = waist-3;
		}	
		void calculateprice()
		{
		  int trouser_price=waist*20+100;
		  cout<<" The price of trouser is :"<<trouser_price<<endl;
		}
	
};
		
int main()
{
	int n;
    cout<< "How much items you want to buy "<<endl;
    cin>> n;
	while(n>10){
	  cout<<" you are not allowed to carry more than 10 items according to this program. "<<endl;	
      cin>>n;	
	}
	cout<<"--------------------------------------"<<endl;
	cout<< " we have BRAND of   \"SHIRTs:\" :-   "<<endl;
	cout<<"--------------------------------------"<<endl;
    cout<<" \tMJ BRAND \n"
          " \tSUNNAH   \n"
          " \tQABA'IL  \n"
          " \tYK BRAND   \n"
          " \tCALVIN KLEIN\n"
          " \tOthers\n";
 
// To allow the user to select an element of the array, you can use an input statement and a loop to validate the input.
   int m;
   cout<< "How much items you want to buy "<<endl;
   cin>> m;
   string shirts[5];
   cout << "Please enter the element you want to select: ";
   for(int i=0;i<m;i++){
   cin>>shirts[i];     }
	cout<<"your items are:\n"<<endl;
	for(int i=0;i<m;i++){
	cout<<shirts[i]<<endl;
    } int s_buy=sizeof(shirts) / sizeof(string);

	Shirt s1;
	s1.getCollarSize();
	s1.calculatePrice(s_buy);
	
	cout<<"--------------------------------------"<<endl;
	cout<< "we have BRAND of  \"TROUSERs:\"   "<<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"\t MJ BRAND \n","\t SUNNAH \n","\t ASICS \n","\t PALAZZO \n","\t ABAYA \n";
	int v;
    cout<< "How much items you want to buy "<<endl;
    cin>> v;
	string trouser[v];
    cout << "Please enter the element you want to select: ";
	for(int i=0;i<v;i++){
	cin>>trouser[i];
}   cout<<"your items are:\n"<<endl;
	for(int i=0;i<v;i++){
	cout<<trouser[i]<<endl;
}
    Trouser t1;
	t1.getwaist();
	t1.calculateprice();

    cout<<"--------------------------------------"<<endl;
	cout<< "we have BRAND of \n  \"PAJAMAs:\"   " <<endl;
	cout<<"--------------------------------------"<<endl;
	cout<<"\tKURTA PAJAMA\n","\tMJ BRAND\n","\tBIBA BRAND\n","\tSR BRAND\n","\tNK BRAND\n";
	int p;
    cout<< "How much items you want to buy "<<endl;
    cin>> p;
	string pajama[5];
    cout << "Please enter the element you want to select: ";
	for(int i=0;i<p;i++){
	cin>>pajama[i];
}
	cout<<"your items are:\n"<<endl;
	for(int i=0;i<p;i++){
	cout<<pajama[i]<<endl;
}
    Pajama p1;
	p1.getwaist();
	p1.calculateprice();

	
 return 0;
}