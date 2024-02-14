#include<iostream>
using namespace std;
class coustomerdata{
	public:
		string customername;
		int customernumber;
		string adress;
		bool mailinglist;
		int arr[1000];
		int i,cond;
		public:
			coustomerdata(){
				customername="";
				customernumber=0;
				adress="";
				mailinglist=false;
				for(int k=0;k<1000;k++)
					arr[k]=0;
				i=cond=0;
			}
			coustomerdata(string c,int cn,string a,bool m){
				customername=c;
				customernumber=cn;
				adress=a;
				mailinglist=m;				
			}
			
			void set_coustomername(string c){
					customername=c;
				
			}
			void set_coustomernum(int cn){				
            customernumber = cn; 				
			}
			void set_adress(string a){
				adress=a;
			}
			string get_coustomername(){
				cout<<"coustomer name : "<<customername;
				cin>>customername;
				return customername;
			}
			int found(int cnn){
				for(int l=1;l<1000;l++){
					if(cnn==arr[l]){
						cout<<"same customer found.\n";
						cout<<"arr[i] is "<<arr[i]<<endl;
						return 1;
					
					}
				}
				return 0;
			}
			int get_coustomernum(){
				restart:
				cout<<"coustomer number : ";
				cin>>customernumber;
				if(i==0){
					arr[i]=customernumber;
					i++;	
				}				
				if(!found(customernumber)){
					
				arr[i]=customernumber;
				i++;
				cout<<"hello\n";
				
				cout<<"\nThe current customers are :";
				for(int p=0;p<i;p++)
					cout<<arr[p]<<"  ";
				cout<<endl;
				}
				else{
					
					cout<<"invalid id ";
					goto restart;
				
				}
			
				
				return customernumber;
			}
			string get_adress(){
				cout<<"adress : "<<adress<<endl;
				return adress;
			}
			bool mailing(){
				cout<<"Hello coustomer : "<<endl;
				cout<<"do you wish to be added on the mailing list : "<<endl;
				cin>>customernumber;
				if(customernumber==1){
					cout<<"you are added to list "<<endl;
					return true;
				}
				else{
					cout<<"you are not added to list "<<endl;
					return false;
				}
			}
			
};
class prefercoustomer:public coustomerdata{
	public:
		double purchasesAmount;
		double  discountLevel;
			 prefercoustomer(){
				 purchasesAmount=0.0;
			 	discountLevel=0.0;
			 	
			 }		
			  prefercoustomer(string c,int cn,string a,bool m,double am,double di):coustomerdata(c,cn,a,m){
				purchasesAmount=am;
			  	discountLevel=di;
			  }
		 double get_purchasesAmount() {
        return purchasesAmount;
    }
     double get_discountLevel() {
        return discountLevel;
    }			  
	 void calculateDiscount() {
	
        if (purchasesAmount >= 2000.0) {
            discountLevel = 10;
        }
        else if (purchasesAmount >= 1500.0) {
            discountLevel = 7;
        }
        else if (purchasesAmount >= 1000.0) {
            discountLevel = 6;
        }
        else if (purchasesAmount >= 500.0) {
            discountLevel = 5;
        }
        else {
            discountLevel = 0.0; 
        }
        cout<<"your discount is : "<<discountLevel<<endl;
    }

    double calculateDiscountAmount() {
    	cout<<"price : "<<purchasesAmount<<endl;
        return purchasesAmount - discountLevel;
    }		
};
int main(){
	 char c;
    do {
        prefercoustomer obj;    
        obj.get_coustomername();
        obj.get_coustomernum();
        obj.mailing();
        cout << "Enter purchases amount:";
        cin >> obj.purchasesAmount;
        obj.calculateDiscount();
        obj.calculateDiscountAmount();
        cout<<"discount level : "<<obj.get_discountLevel()*100<<endl;
        cout << "Continue? Press C: ";
        cin >> c;
    } while (c == 'C' || c == 'c');

}

/*#include<iostream>
using namespace std;

class coustomerdata {
public:
    string customername;
    int customernumber;
    string adress;
    bool mailinglist;
    int arr[1000];
    int i, cond;

public:
    coustomerdata() {
        customername = "";
        customernumber = 0;
        adress = "";
        mailinglist = false;
        for (int k = 0; k < 1000; k++)
            arr[k] = 0;
        i = cond = 0;
    }

    coustomerdata(string c, int cn, string a, bool m) {
        customername = c;
        customernumber = cn;
        adress = a;
        mailinglist = m;
    }

    void set_coustomername(string c) {
        customername = c;
    }

    void set_coustomernum(int cn) {
        customernumber = cn;
    }

    void set_adress(string a) {
        adress = a;
    }

    string get_coustomername() {
        cout << "coustomer name : " << customername;
        cin >> customername;
        return customername;
    }

    int found(int cnn) {
        for (int l = 0; l < i; l++) {
            if (cnn == arr[l]) {
                cout << "same customer found.\n";
                cout << "arr[i] is " << arr[l] << endl;
                return 1;
            }
        }
        return 0;
    }

    int get_coustomernum() {
        restart:
        cout << "coustomer number : ";
        cin >> customernumber;
        if (i == 0 || !found(customernumber)) {
            arr[i] = customernumber;
            i++;
            /*cout << "hello\n";
            cout << "\nThe current customers are :";
            for (int p = 0; p < i; p++)
                cout << arr[p] << "  ";
            cout << endl;
        }
        else {
            cout << "invalid id ";
            goto restart;
        }

        return customernumber;
    }

    string get_adress() {
        cout << "adress : " << adress << endl;
        return adress;
    }

    bool mailing() {
        cout << "Hello coustomer : " << endl;
        cout << "do you wish to be added on the mailing list (1 for yes, 0 for no): ";
        cin >> mailinglist;
        if (mailinglist) {
            cout << "you are added to the list " << endl;
        }
        else {
            cout << "you are not added to the list " << endl;
        }
        return mailinglist;
    }

};

class prefercoustomer : public coustomerdata {
public:
    double purchasesAmount;
    double discountLevel;

public:
    prefercoustomer() {
        purchasesAmount = 0.0;
        discountLevel = 0.0;
    }

    prefercoustomer(string c, int cn, string a, bool m, double am, double di) : coustomerdata(c, cn, a, m) {
        purchasesAmount = am;
        discountLevel = di;
    }

    double get_purchasesAmount() {
        return purchasesAmount;
    }

    double get_discountLevel() {
        return discountLevel;
    }

    void calculateDiscount() {
        if (purchasesAmount >= 2000.0) {
            discountLevel = 10;
        }
        else if (purchasesAmount >= 1500.0) {
            discountLevel = 7;
        }
        else if (purchasesAmount >= 1000.0) {
            discountLevel = 6;
        }
        else if (purchasesAmount >= 500.0) {
            discountLevel = 5;
        }
        else {
            discountLevel = 0.0;
        }
        cout << "your discount is : " << discountLevel << endl;
    }

    double calculateDiscountAmount() {
        cout << "price : " << purchasesAmount << endl;
        return purchasesAmount - discountLevel;
    }
};

int main() {
    char c;
    do {
        prefercoustomer obj;
        obj.get_coustomername();
        obj.get_coustomernum();
        obj.mailing();
        cout << "Enter purchases amount:";
        cin >> obj.purchasesAmount;
        obj.calculateDiscount();
        obj.calculateDiscountAmount();
        cout << "discount level : " << obj.get_discountLevel() * 100 << endl;
        cout << "Continue? Press C: ";
        cin >> c;
    } while (c == 'C' || c == 'c');
    return 0;
}*/

