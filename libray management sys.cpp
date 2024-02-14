#include<bits/stdc++.h> // conversion 
#include<iostream>                                  
#include<conio.h> //getche
#include<iomanip> //set w
#include<string.h>
#include<fstream>
#include<string>
#include <unistd.h> // sleep                   
using namespace std;                    
class book                             
{   public:                           
	char bno[6];//bookno.               
	char bname[70];//bookname
	char aname[20];//authorname
	char stock[20];
	public:
		book(){
			bno[0]='\0';
			bname[0]='\0';
			aname[0]='\0';
			stock[0]='\0';
		}
		book(char bko,char bkn,char a,char sk){
			bno[0]='bko';
			bname[0]='bkn';
			aname[0]='a';
			stock[0]='sk';
		}
		
	void createbook()
	
	{
		again:
			system("cls");
		cout<<"\nNEW BOOK ENTRY...\n";
		cout<<"\nENTER BOOK NO. : ";
		cin>>bno;
		 
		try {
        
	        for(int i=0;bno[i]!='\0';i++)
	        {
	        	if(!isdigit(bno[i])) // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
			}
			
	    }
	    catch(const char* ep){
	    	cout<<ep;
	    	cout<<"Wait to Enter again......";
	    	sleep(3);
	    	goto again;
		}
			sstart:
		cout<<"\nENTER BOOK NAME : ";
		cin.ignore();
		cin.getline(bname,69);
			try{
			for(int i=0;bname[i]!='\0';i++){
				if(isdigit(bname[i])){ 
					throw "Invalid input...The input must be character\n";
			}
					
			}
			
		}
		catch(const char* Er){
			cout<<Er;
			cout<<"wait for 3 second "<<endl;
			sleep(3);		
			goto sstart;
		}
		
		getbook();				
	}
	void getbook(){
		startt:
			
		cout<<"\nENTER AUTHOR NAME : ";
		cin.getline(aname,19);
			try{
			for(int i=0;aname[i]!='\0';i++){
				if(isdigit(aname[i])){ 
					throw "Invalid input...The input must be character\n";
			}
					
			}
			
		}
		catch(const char* Err){
			cout<<Err;
			cout<<"wait for 3 second "<<endl;
			sleep(3);		
			goto startt;
		}
				
	}
	void storeBookStock() {
		aagain:
			
		cout<<"\n\nENTER STOCK FOR A BOOK  : ";
		cin>>stock;
			try {
        
	        for(int i=0;stock[i]!=0;i++)
	        {
	        	if(!isdigit(stock[i])) // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
			}
			
	    }
	    catch(const char* es){
	    	cout<<es;
	    	cout<<"Wait for 3 seconds to Enter again......";
	    	sleep(3);
	    	goto aagain;
		}
		cout<<"\n\n\nBook Created..";
        ofstream stockFile("stock.txt", ios::app);

        if (!stockFile) {
            cout << "Error opening stock file!" << endl;
            return;
        }
        

        stockFile << retbno() << setw(5) << stock << endl;

        stockFile.close();
    }
    
    int getStock() {
        return atoi(stock);
    }
     void updateStock(int quantity) {
        int currentStock = getStock();
        currentStock -= quantity;
        sprintf(stock, "%d", currentStock); // it is used to convert string or int arr to char bufferr arr
        									//buffer : it is a memory space for temporary storing data before writing
    }
	void showbook()
	{
		cout<<"\nBook Number: "<<bno;
		cout<<"\nBook Name: "<<bname;
	//	puts(bname);
		cout<<"\nBook Author Name: "<<aname;
		//puts(aname);
	}
	void modifybook()
	{
		cout<<"\nBook Number: "<<bno;
		cout<<"\nModify Book Name :";
		cin.ignore();
		cin.getline(bname,69);
		cout<<"\nModify Author's Name :";
		cin.getline(aname,19);
		
	}
	
	char* retbno()//string return
	{
		return bno;
	
	}
	
	void report()
	{

		
		cout<<bno<<"\t"<<setw(20)<<bname<<setw(22)<<aname<<setw(17)<<stock<<endl;
		
	}
};//class ends here

class student{

	public:
	char admno[6];//admission no.
	char name[20];
	char stbno[6];// student book no 
	int curr_issued;//total book of student
	int book_days;
	char ch;
	public:
	student(){
		curr_issued = 0;
		book_days = 15;
	}
	void createstudent()
	{
		restart:
		system("cls");
		cout<<"\nNEW STUDENT ENTRY...\n";
		cout<<"\nEnter Sap id :  ";
		cin>>admno;
		
			try {
        
	        for(int i=0;admno[i]!='\0';i++)
	        {
	        	if(!isdigit(admno[i])) // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
			}
			
	    }
	    catch(const char* err){
	    	cout<<err;
	    	cout<<"Wait to Enter again......";
	    	sleep(3);
	    	goto restart;
		}
		start:
			
		cout<<"Enter The Student Name ";
		cin.ignore();
		cin.getline(name,19);
		try{
			for(int i=0;name[i]!='\0';i++){
				if(isdigit(name[i])){ 
					throw "Invalid input...The input must be character\n";
			}
					
			}
			
		}
		catch(const char* ei){
			cout<<ei;
			cout<<"wait for 3 second "<<endl;
			sleep(3);	
			system("cls");	
			goto start;
		}
			cout<<"\n\nStudent Record Created...";
	
		curr_issued=0;
		stbno[0]='\0';	
	}
	void showstudent()
	{
		cout<<"\nSap id : "<<admno;
		cout<<"\nStudent Name : "<<name;
		cout<<"\nNo of Book Issued : "<<curr_issued;
		if(curr_issued==1)
		{
			cout<<"\nBook Number "<<stbno<<endl;
		}
	}
	void modifystudent()
	{
		cout<<"\nSap id No. : ";
		cin.ignore();
		cin>>admno;
		start3:
		cout<<"\nModify Student Name : ";
		cin.ignore();
		cin.getline(name,19);
		
		try{
			for(int i=0;name[i]!='\0';i++){
				if(isdigit(name[i])){
					throw"Invalid input....The input must be character\n";
				}
				
			}
		}
		catch(const char* e){
			cout<<e;
			cout<<"wait for 3 seconds ";
			sleep(3);
			goto  start3;
			
			
		}
	
	}
	char* retadmno()
	{
		return admno;
	}
	char* retstbno()
	{
		return stbno;
	}
	int retcurr_issued()
	{
		return curr_issued;
	}
	void addcurr_issued()
	{
		curr_issued=1;
	}
	int getdays(){
		return book_days;
	}
	void setdays(int n){
		book_days = n;
	}
	void resetcurr_issued()
	{ 
	curr_issued=0;
	}
	void getstbno(char t[])
	{
		strcpy(stbno,t);   // stbno = t
	}
	void report()
	{
		cout<<admno<<setw(30)<<name<<setw(15)<<curr_issued<<endl ;
	}
};//class ends here
int check_fine = 0;
 char issue_date[11] , deposit_date[11];
int is_deposited=0;

class Fine:protected student{
	int fine;
	int days;
	int amount;
	public:
	Fine(){
		fine = 0;
		amount  = 50;
		days = student::getdays();
	}
	void calculate_fine(char n[]){
		
		fstream f1;
		student ob;
		cout<<"\nSTUDENT DETAILS\n";
	 	int flag=0;//student not found
	 	f1.open("student.txt", ios::in);//read data
		 while(f1.read((char *)&ob,sizeof(student)))//&ob reads the memory adress as a char
		 {
			 if(strcmpi(ob.retadmno(),n)==0)//not case sensitive
			 {
				  ob.showstudent();
				  flag=1;
			 }
		 }
		 f1.close();
		 if(flag==0)//student not found
		 {
			cout<<"\n\nStudent does not exist";
	        getch();
	        return;
		 }
		 if(is_deposited==0){
		 
			cout<<"Enter total days since issue of book  : ";
			cin>>days;
			cout<<"Book was issued for : "<<check_fine<<" days       \n";
			if(days>check_fine){
				fine = (days-check_fine)*amount;
			} 
		}
		else{
			int day1=0,day2=0,month1=0,month2=0,year1=0,year2=0;
		    char *ptr; 
		    ptr = strtok(issue_date, "/");   //strtok : it is used to break the statement by using slash or empty space
 
     		 int i =0;
		    while (ptr != NULL) //dd/mm/yy 
		    { if(i==0) // token is seperated 
		    	day1=atoi(ptr);
		    	if(i==1)
		    	month1=atoi(ptr);
		    	if(i==2)
		    	year1=atoi(ptr);
		        ptr = strtok (NULL, "/");  
		        i++;
		       
		    } 
		   // cout<<"day "<<day1<<" month "<<month1<<" year "<<year1;
		    char *ptr2; 
		    ptr2 = strtok(deposit_date, "/");   //token slash "/"
 
     		 i =0;
		    while (ptr2 != NULL)  
		    { 
			if(i==0)
		    	day2=atoi(ptr2);
		    	if(i==1)
		    	month2=atoi(ptr2);
		    	if(i==2)
		    	year2=atoi(ptr2);
		        ptr2 = strtok (NULL, "/");  
		        i++;
		       
		    } 
		    int temp1,temp2,temp3;
		    if(year2>=year1){
		    	temp3=year2-year1;
		    	if(month2<month1&&year2==year1){
		    		fine=0;
		    		cout<<"invalid Input ...Deposit cannot be earlier than issue date";
		    		
				}
				else{
					temp2=month2-month1;
					if(day2<day1&&month1==month2){
						fine=0;
						cout<<"invalid Input ...Deposit cannot be earlier than issue date";
					}
					else{
						temp1=day2-day1;
						int t_days=(temp3*365)+(temp2*30)+temp1;
						if(year2>year1)
						t_days=t_days-5;
						fine = (t_days-check_fine)*amount;
					}
				}
				
			}
			else{
				fine=0;
				cout<<"invalid Input ...Deposit cannot be earlier than issue date";
			}
		}
	}
	int get_fine(){
		if(fine<0)
		return 0;
		return fine;
	}		
};

fstream fp,fp1;//object
book bk;//book class object
student st;//student class object
char t1[6];


class handler{
	protected :
		char bn[6];
		int contactno;
		  
	public:
		void writebook(){
	char ch;
	 fp.open("book.txt", ios::out | ios::app );//write and append data
	do{
		system("cls");
		bk.createbook();
		 bk.storeBookStock();
		fp.write((char*)&bk,sizeof(book)); //size of class
		cout<<"\n\nDo you want to add more record...(y/n?) ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
}

void writestudent()
{
	char ch;
	fp.open("student.txt",ios::out|ios::app);//write and append data
	do{
		system("cls");
		st.createstudent();
		fp.write((char*)&st,sizeof(student));//size of class
		cout<<"\n\nDo you want to add more record...(y/n?) ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	fp.close();
	
}
 void displayspb(char n[])
 {
	 cout<<"\nBOOK DETAILS\n";
	 int flag=0;//book not found
	 fp.open("book.txt",ios::in);//read data
	 while(fp.read((char *)&bk,sizeof(book)))
	 {
		 if(strcmpi(bk.retbno(),n)==0)//not case sensitive
		 {
			  bk.showbook();
			  flag=1;
		 }
	 }
	 fp.close();
	 if(flag==0)//book not found
	 {
		 cout<<"\n\nBook does not exist";
         		 
	 }
	 getch();
}
 void displaysps(char n[])
 {
	 cout<<"\nSTUDENT DETAILS\n";
	 int flag=0;//student not found
	 fp.open("student.txt", ios::in);//read data
	 while(fp.read((char *)&st,sizeof(student)))
	 {
		 if(strcmpi(st.retadmno(),n)==0)//not case sensitive
		 {
			  st.showstudent();
			  flag=1;
		 }
	 }
	 fp.close();
	 if(flag==0)//student not found
	 {
		 cout<<"\n\nStudent does not exist";
         		 
	 }
	 getch();
}
void modifybook()
{
 char n[6];
    int found = 0; // search book of given data

again3:
    system("cls");
    cout << "\n\nMODIFY BOOK RECORD...";
    cout << "\n\nEnter the book no. ";
    cin >> n;

    try {
        for (int i = 0; n[i] != '\0'; i++) {
            if (!isdigit(n[i])) // check if input is a number
                throw "The input is not a number. Invalid Input.......\n";
        }
    } catch (const char* ag) {
        cout << ag;
        cout << "Wait to Enter again......";
        sleep(3);
        goto again3;
    }

    fp.open("book.txt", ios::in | ios::out);
    while (fp.read((char*)&bk, sizeof(book)) && found == 0) {
        if (strcmpi(bk.retbno(), n) == 0) {
            bk.showbook();
			cout<<endl;
            char choice;
            aaloop:
            try {
                cout << "\nWhat would you like to modify?\n";
                cout << "1. Modify Book Name\n";
                cout << "2. Modify Author's Name\n";
                cout << "Enter your choice (1 or 2): ";
                cin >> choice;

                if (choice != '1' && choice != '2') {
                    throw "Invalid choice. Please enter 1 or 2.\n";
                }

            } catch (const char* ex) {
                cout << ex;
                cout << "Wait for 3 seconds\n";
                sleep(3);
                system("cls");
                goto aaloop;
               // Go back to the beginning of the loop
            }
            
            
            
            
            
            

            switch (choice) {
                case '1':
                	fforward:
                    cout << "\nEnter the new Book Name: ";
                    cin.ignore();
                    cin.getline(bk.bname, 69);
                    try{
			for(int i=0;bk.bname[i]!='\0';i++){
				if(isdigit(bk.bname[i])){ 
					throw "Invalid input...The input must be character\n";
			}
					
			}
			
		}
		catch(const char* app){
			cout<<app;
			cout<<"wait for 3 second "<<endl;
			sleep(3);		
			goto fforward;
		}
		
                    break;

                case '2':
                	loop:
                    cout << "\nEnter the new Author's Name: ";
                    cin.ignore();
                    cin.getline(bk.aname, 19);
                      try{
			for(int i=0;bk.aname[i]!='\0';i++){
				if(isdigit(bk.aname[i])){ 
					throw "Invalid input...The input must be character\n";
			}
					
			}
			
		}
		catch(const char* appi){
			cout<<appi;
			cout<<"wait for 3 second "<<endl;
			sleep(3);		
			goto loop;
		}
                    break;

                default:
                    cout << "\nInvalid choice. No modifications made.\n";
                    break;
            }

            int pos = -1 * sizeof(bk);
            fp.seekp(pos, ios::cur); // seekp: it moves the pointer to the desire location and then write onwards
            fp.write((char*)&bk, sizeof(book));
            cout << "\n\nRecord Updated";
            found = 1;
        }
    }
    fp.close();

    if (found == 0) {
        cout << "\n\nRecord Not Found";
    }

    getch(); // press any key to exit
}
 void modifystudent()
{
 char n[6];
    int found = 0; // search student of given data

reagain:
    system("cls");
    cout << "\n\nMODIFY STUDENT RECORD...";
    cout << "\n\nEnter the SAP ID: ";
    cin >> n;

    fp.open("student.txt", ios::in | ios::out);
    while (fp.read((char*)&st, sizeof(student)) && found == 0) {
        if (strcmpi(st.retadmno(), n) == 0) {
            st.showstudent();

            char choice;
            aaaloop:
            try{
			
            cout << "\nWhat would you like to modify?\n";
            cout << "1. Modify Student Name\n";
            cout << "2. Modify SAP ID\n";
            cout << "Enter your choice (1 or 2): ";
            cin >> choice;
            if(choice!='1'&&choice !='2'){
            	throw"Invalid choice. Please enter 1 or 2.\n";
			}
        }
        catch(const char* exx){
        	cout<<exx;
        	cout << "Wait for 3 seconds\n";
            sleep(3);
            system("cls");
            goto aaaloop;
		}
        
			cout<<endl;
            switch (choice) {
                case '1':
                	rep:
                    cout << "\nEnter the new Student Name: ";
                    cin.ignore();
                    cin.getline(st.name, 19);
					 try{
					 	for(int i=0;i<st.name[i];i++){
					 		if(isdigit(st.name[i]))
					 		 throw"Error : the must be character... ";
						 }
					
					 }
					 catch(const char* irr){
					 	cout<<irr;
					 	cout<<"wait for 3 second "<<endl;
						sleep(3);	
						goto rep;
					 }
                    break;

                case '2':
                	repp:
                    cout << "\nEnter the new SAP ID: ";
                    cin >> st.admno;
					 try{
					 	for(int i=0;i<st.admno[i];i++){
					 		if(!isdigit(st.admno[i]))
					 		 throw"Error : the must be number... ";
						 }
					
					 }
					 catch(const char* arr){
					 	cout<<arr;
					 	cout<<"wait for 3 second "<<endl;
						sleep(3);	
						goto repp;
					 }
                    break;

                default:
                    cout << "\nInvalid choice. No modifications made.\n";
                    break;
            }

            int pos = -1 * sizeof(st);
            fp.seekp(pos, ios::cur);
            fp.write((char*)&st, sizeof(student));
            cout << "\n\nRecord Updated";
            found = 1;
        }
    }
    fp.close();

    try {
        for (int i = 0; n[i] != '\0'; i++) {
            if (!isdigit(n[i])) // check if input is a number
                throw "The input is not a number. Invalid Input.......\n";
        }

        if (found == 0) {
            throw "Record not found..........\n";
        }
    } catch (const char* err) {
        cout << err;
        cout << "Wait for 3 seconds ";
        sleep(3);
        goto reagain;
    }
     getche(); // press any key to exit
}

 
 void deletestudent()
 {
	 char n[6];
	 int flag=0;
	 Repeate:
	 system("cls");
	 cout<<"\n\n\n\tDELETE STUDENT...";
	 cout<<"\n\nEnter the Sap id : ";
	 cin>>n;
	 fp.open("student.txt",ios::in|ios::out);
	 fstream fp2;
	 fp2.open("temp.txt",ios::out);
	 fp.seekg(0,ios::beg);
	 ofstream fp3("Studentbackup.txt");
	 while(fp.read((char*)&st,sizeof(student)))
	 {
		 if(strcmpi(st.retadmno(),n)!=0)//jo rollno aya usse skip krde gha 
		 {
			 fp2.write((char*)&st,sizeof(student));
		 }
		 else{
		 	fp3.write((char*)&st,sizeof(student));
			 flag=1;//student found
		 }
	 } 
	 fp3.close();
	 fp2.close();
	 fp.close();
	remove("student.txt");
	//rename("student.txt","backup.txt");
	rename("temp.txt","student.txt");//data after deletion moved to temp
	 if(flag==1)
	 {
		 cout<<"\n\n\tRecord Deleted..";
	 }
	
	 try{
	 	for(int i=0;n[i]!=0;i++){
	 		if(!isdigit(n[i]))
	 		throw "\nthe input is not a number... Enter number\n";
	 		
		 }
		 if(flag==0){
		 	throw "Record not found ";
		 }
	 	
	 }
	 catch(const char* errrr){
	 	cout<<errrr;
	 	cout<<"Wait for 3 seconds to Enter again..."<<endl;
	 	sleep(3);
	 
	 	goto Repeate;
	 }
	 	 
	 getch();
 }
 
 void deletebook() {
    char n[6]; // book number
    int flag = 0;
	again4:
    system("cls");
    cout << "\n\n\n\tDELETE BOOK...";
    cout << "\n\nEnter the Book no: ";
    cin >> n;
    	try {
        
	        for(int i=0;n[i]!='\0';i++)
	        {
	        	if(!isdigit(n[i])) // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
			}
			
	    }
	    catch(const char* ag){
	    	cout<<ag;
	    	cout<<"Wait to Enter again......";
	    	sleep(3);
	    	goto again4;
		}

    ifstream fp("book.txt"); // Open file for input
    ofstream fp2("Temp.txt"); // Open file for output (temporary file)
    ofstream fp3("bookbackup.txt");

    while (fp.read((char*)&bk, sizeof(book))) {
        if (strcmpi(bk.retbno(), n) != 0) {
            fp2.write((char*)&bk, sizeof(book)); // Write the record to the temporary file
        }
        else {
        	fp3.write((char*)&bk, sizeof(book));
            flag = 1; // Book found
        }
    }
	fp3.close();
    fp2.close();
    fp.close();
    remove("book.txt"); // Delete the original file
    //rename("book.txt", "backupbook.txt");
    rename("Temp.txt", "book.txt"); // Rename the temporary file to the original file name

    if (flag == 1) {
        cout << "\n\n\tRecord Deleted...";
    }
    else {
        cout << "\n\nRecord not Found";
    }

    getch();
}

 void displayalls()
 {
	 system("cls");
	 fp.open("student.txt",ios::in);//read mode
	 if(!fp)
	 {
		 cout<<"File Could Not Be Open";
		 getch();
		 return;//press any key and return
	 }
	 cout<<"\n\n\t\tStudent List\n\n";
	 cout<<"==================================================================\n";
	 cout<<"Sap id."<<setw(15)<<"Name"<<setw(30)<<"Book Issued\n";
	 cout<<"==================================================================\n";
	 while(fp.read((char*)&st,sizeof(student)))
	 {
		 st.report();
	 }
	 fp.close();
	 getch();
 }
  void displayallb()
 {
	 system("cls");
	 fp.open("book.txt",ios::in);//read mode
	 if(!fp)
	 {
		 cout<<"File Could Not Be Open";
		 getch();
		 return;//press any key and return
	 }
	 cout<<"\n\n\t\tBook List\n\n";
	 cout<<"=====================================================================================\n";
	 cout<<"Book No."<<setw(10)<<"\tBook Name"<<setw(15)<<"\t\tBook Author"<<setw(10)<<"\t\tStock\n";  
	 cout<<"=====================================================================================\n";
	   while(fp.read((char*)&bk,sizeof(book))) {
       	 	bk.report();
    }
	 fp.close();
	 getch();
 }
 void bookissue()
 {	
 
	 char sn[6];
	 int found=0,flag=0;
	
	int cond1=0;
	int bk_day=15;
	restart5:
	 
	 system("cls");
	 cout<<"\n\nBOOK ISSUE...";
	 cout<<"\n\n\tEnter sap id : ";
	 cin>>sn;
	 try {
        
	        for(int i=0;sn[i]!='\0';i++)
	        {
	        	if(!isdigit(sn[i])) // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
			}
			
	    }
	    catch(const char* ep){
	    	cout<<ep;
	    	cout<<"Wait to Enter again......";
	    	sleep(3);
	    	
		}
	 
	 cin.ignore();
	 
	 
	 	try {
        
	        for(int i=0;sn[i]!='\0';i++)
	        {
	        	if(!isdigit(sn[i])){ // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
	        		break;
	        	}
			}
			
	    }
	    catch(const char* err){
	    	cout<<err;
	    	cout<<"Wait to Enter again......";
	    	sleep(3);
	    	goto restart5;
		}
	 cout<<"Enter your contact number : ";	 
	 cin>>contactno;
	 cout<<"Enter issue date (dd/mm/yy): ";	
	 cin.ignore();	  
	 cin.getline(issue_date,11); 
	 fp.open("student.txt",ios::in|ios::out);
	 fp1.open("book.txt",ios::in|ios::out);
	 	int condition=0;
	 while(fp.read((char*)&st,sizeof(student))&& found==0)
	 {
		 if(strcmpi(st.retadmno(),sn)==0)//compare admsn no.
		 {
			 found=1;
			 if(st.retcurr_issued()==0)//if book not issued
			 {
			 	againnn:
				cout<<"\n\n\tEnter The Book No.";
			 	cin>>bn;
			 	 try {
        
	        for(int i=0;bn[i]!='\0';i++)
	        {
	        	if(!isdigit(bn[i])) // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
			}
			
	    }
	    catch(const char* eo){
	    	cout<<eo;
	    	cout<<"Wait for 3 seconds Enter again......\n";
	    	sleep(3);
	    	goto againnn;
	    	
		}	
				cout<<endl;	 
				starttt:	
			 	cout<<"Enter Number of Days for which you want  to borrow the book : ";
			 	
		
			cin>>bk_day;
				if (cin.fail()) { //cin.fail() used in input validation for example if you enter wrong input it returns true means failure has occure
    			cin.clear(); // it is used to reset the cin 
    			cin.ignore(numeric_limits<streamsize>::max(), '\n');// it is used to ignore maximum size of charcter
   				 cout << "Invalid input. Please enter a valid number. wait 3 seconds to enter again\n";
   				 sleep(3);
   				 goto starttt;
}
			
			while(bk_day <= 0 || bk_day >65)
			{
				cout<<"Invalid Input. It should be a number between 1 to 65, Enter again : ";
				cin>>bk_day;
			}
			
			}
			else
			 {
				 
				 cout<<"You Have Not Returned The Last Book";
				 break;
			 }	
			 	check_fine=bk_day;
			
			 	st.setdays(check_fine);
			 	
			  while(fp1.read((char*)&bk,sizeof(book))&& flag==0)
			  {
				   if(strcmpi(bk.retbno(),bn)==0)//compare book no.
		             {
			          flag=1;
					  st.addcurr_issued();
					  st.getstbno(bk.retbno());//pass book no.
					  int pos=-1*sizeof(st);
					  fp.seekg(pos,ios::cur);
					  fp.write((char*)&st,sizeof(student));
					  cout<<"\n\n\tBook Issued Successfully\n\n";
					   bk.updateStock(1);
               			 int posBook = -1 * sizeof(bk);
               			 fp1.seekg(posBook, ios::cur);
               			 fp1.write((char*)&bk, sizeof(book));
						  storeDates(sn, issue_date, "");
					  
					
			  }
		 }
		 if(flag==0)
		 {
			 cout<<"Book No. Does Not Exists";
		 }
		 
	 } 
	  
 
 }
 if(found==0)
 {
	 cout<<"Student Record Not Exists...";
	 
 }

 getch();
  
 fp.close();
 fp1.close();
 }
 
 void bookdeposit()
 {
	 char sn[6];//bn[6];
	 int found=0,flag=0,day=0,fine=0;
	 
	 system("cls");
	  for(int i=0;i<6;i++) // kyunnnnnn??
			sn[i]=0;
			restart6:
				system("cls");
	 cout<<"\n\nBOOK DEPOSIT...";
	 cout<<"\n\n\tEnter Sap id : ";
	 cin>>sn;
	 
	 	try {
        
	        for(int i=0;sn[i]!='\0';i++)
	        {
	        	if(!isdigit(sn[i])){ // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
	        		break;
	        	}
			}
			
	    }
	    catch(const char* erri){
	    	cout<<erri;
	    	cout<<"Wait to Enter again......";
	    	sleep(3);
	    	goto restart6;
		}
	 cout<<"Your Contact Number : "<<contactno<<endl;
	
	 for(int i=0;i<6;i++) // ek dafa lene k liyee
	 	t1[i]=sn[i];
	 	ifstream dateFile("dates.txt");

    if (!dateFile) {
        cout << "File could not be opened!" << endl;
        return;
    }
	 /*cout<<"Issue Date is : ";
	 for(int i=0;issue_date[i]!='\0';i++)
	 	cout<<issue_date[i];*/
	 	 string line;
     while (getline(dateFile, line)) {
        size_t sapPos = line.find(sn);
        if (sapPos != string::npos) {
            size_t issuePos = line.find("Issue Date: ");
            if (issuePos != string::npos) {
                // Extract and display the issue date
                string issue_date3 = line.substr(issuePos + 12, 10); //sub string
               
                strncpy(issue_date, issue_date3.c_str(), sizeof(issue_date) - 1);
                issue_date[sizeof(issue_date) - 1] = '\0';
               
                cout << "\nIssue Date "<< ": " << issue_date << endl;
            } else {
                cout << "\nIssue Date not found for SAP ID " << sn << endl;
            }
            break;  // Assuming each SAP ID is unique; stop searching once found
        }
        
        
    }

    dateFile.close();
	
	 cout<<"\ndeposit date (dd/mm/yy) : ";
	 cin.ignore();
	 cin.getline(deposit_date,11);
	 is_deposited=1;
	 fp.open("student.txt",ios::in|ios::out);
	 fp1.open("book.txt",ios::in|ios::out);
	  //updateDepositDate(sn,issue_date,deposit_date);
	 while(fp.read((char*)&st,sizeof(student))&& found==0)
	 {
		 if(strcmpi(st.retadmno(),sn)==0)//compare admsn no . default fun that compare two  strings to checkm if they re same
		 {
			 found=1;
			 if(st.retcurr_issued()==1)//if book issued
			 {
				 while(fp1.read((char*)&bk,sizeof(book))&& flag==0)
			  {
				   if(strcmpi(bk.retbno(),st.retstbno())==0)
		             {
			          flag=1;
					  bk.showbook();
					  
					  st.resetcurr_issued();
					 
					  int pos=-1*sizeof(st);
					  fp.seekg(pos,ios::cur); // 
					  fp.write((char*)&st,sizeof(student));
					  cout<<"\n\n\tBook Deposited Successfully";
					   bk.updateStock(-1);  // Decrease stock by 1 for book deposit
                		int posBook = -1 * sizeof(bk);
                		fp1.seekg(posBook, ios::cur);
               			 fp1.write((char*)&bk, sizeof(book));
					  	storeDates(sn, issue_date, deposit_date);
					  
					
			  }
		 }
		 if(flag==0)
		 {
			 cout<<"Book No. Does Not Exists";
		 }
		 
	 } 
	 
	 else
	 {
		 
		 cout<<"No Book Issued";
		 
	 }
	 
		 
 
	 }
 
 }
	 if(found==0)
	 {
		 cout<<"Student Record Not Exists...";
		 
	 }
	 fp.close();
	 fp1.close();
	 }
	 	void storeDates( char* sapid,  char* issue_date,  char* deposit_date) {
        ofstream dateFile("dates.txt", ios::app); // Open file for appending

        if (!dateFile) {
            cout << "file could not open ! " << endl;
            return;
        }

        dateFile << "Sap id: " << sapid << "\tIssue Date: " << issue_date<< "\tDeposit Date: " << deposit_date << endl;

        dateFile.close();
    }
    	 
};
 
void start(){
	 system("cls");
	cout<<"\n\n\n\n\n\n\t\t\t\tLIBRARY";
	cout<<"\n\n\t\t\t\tMANAGEMENT";
	cout<<"\n\n\t\t\t\tSYSTEM";
	cout<<" \n\t\t\t\t By: ibraheem qasim"; 
	getch();
}

	void studentmenu(){
		char ch3;
		int option;
		handler hand3;
		system("cls");
		//cout<<"\n\t\t=========================================================================================";
		cout << "\n\n\n\t\t\t\t\t\tSTUDENT MENU";
		cout<<"\n\t\t\t\t\t===============================";
		cout << "\n\n\n\t1.CREATE STUDENT RECORD";
    	cout << "\n\n\n\t2.DISPLAY ALL STUDENT RECORD";
    	cout << "\n\n\n\t3.DISPLAY SPECIFIC STUDENT RECORD";
   		cout << "\n\n\n\t4.MODIFY STUDENT RECORD";
    	cout << "\n\n\n\t5.DELETE STUDENT RECORD";
		cout << "\n\n\n\t6.BACK TO MAIN MENU";
		cout << "\n\n\n\tPLEASE ENTER YOUR CHOICE(1-6)";
		ch3=getche();
		switch(ch3){
			case '1':
				hand3.writestudent();
				
				break;
			case '2': 
				hand3.displayalls();
				break;
			case '3':
				system("cls");
				again:
			char num[6];
            system("cls");
            cout << "\n\n\t Please enter Sap id : .";
            cin >> num;	
            	try {
        
	        for(int i=0;num[i]!='\0';i++)
	        {
	        	if(!isdigit(num[i])) // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
			}
			
	    }
	    catch(const char* epi){
	    	cout<<epi;
	    	cout<<"Wait to Enter again......";
	    	sleep(3);
	    	goto again;
		}
            
				hand3.displaysps(num);
				break;
			case '4': 
				hand3.modifystudent();
				break;
			case '5':
				hand3.deletestudent();
				break;
			case '6':
				break;
			default :
				studentmenu();
				break;
		}		
	}
	
	void adminmenu(){	
 		int ch2;
    	handler hand; 
    system("cls");

    cout << "\n\n\n\tADMINISTRATOR MENU";
    cout << "\n\n\n\t1.CREATE BOOK";
    cout << "\n\n\n\t2.DISPLAY ALL BOOKS";
    cout << "\n\n\n\t3.DISPLAY SPECIFIC BOOK";
    cout << "\n\n\n\t4.MODIFY BOOK RECORD";
    cout << "\n\n\n\t5.DELETE BOOK RECORD";
    cout << "\n\n\n\t6.CHECK FINE ";
    cout << "\n\n\n\t7.BACK TO MAIN MENU";

    cout << "\n\n\n\tPLEASE ENTER YOUR CHOICE(1-7)";
    
    while (!(cin >> ch2)) {
        // Invalid input, clear error flag and discard the input
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Invalid input. Please enter a number (1-7): ";
    }

    system("cls");

    switch (ch2) {
        case 1:
        hand.writebook();
        break;
        case 2:
        hand.displayallb();
        break;
        case 3:
        system("cls");
		again:
        char num[6];
		cout<<"\n\n\tPlease enter book no.";
		cin>>num;
			try {
        
	        for(int i=0;num[i]!='\0';i++)
	        {
	        	if(!isdigit(num[i])) // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
			}
			
	    }
	    catch(const char* epo){
	    	cout<<epo;
	    	cout<<"Wait to Enter again......";
	    	sleep(3);
	    	goto again;
		}
		hand.displayspb(num);
        break;
        case 4:
		hand.modifybook();
		break;
		case 5:
		hand.deletebook();
		break;
		case 6:{
			system("cls");
			againn:
				Fine obj;
				char num1[6];
				cout<<"\n\n\t Please enter sap id :";
				cin>>num1;
					try {
        
	        for(int i=0;num1[i]!='\0';i++)
	        {
	        	if(!isdigit(num1[i])) // built in fun , batata hai woh haii yaa naii digit 
	        		throw"The input is not a number. Invalid Input.......\n";
			}
			
	    }
	    catch(const char* epo){
	    	cout<<epo;
	    	cout<<"Wait to Enter again......";
	    	sleep(3);
	    	goto againn;
		}
				obj.calculate_fine(num1);
				cout<<"Total fine is "<<endl<<obj.get_fine()<<endl;
				getch();
				break;
		}
		case 7:
		break;	
        default:
            cout << "\a";
            adminmenu();
            break;
			
	/*	case 7:hand.displayallb();
		break;
		case 8:{
		char num[6];
		system("cls");
		cout<<"\n\n\tPlease enter book no.";
		cin>>num;
		hand.displayspb(num);
		break;
		}
		case 9:hand.modifybook();
		break;
		case 10:hand.deletebook();
		break;
		case 11:
			{
				Fine obj;
				char num1[6];
				system("cls");
				cout<<"\n\n\t Please enter admission no.";
				cin>>num1;
				obj.calculate_fine(num1);
				cout<<"Total fine is "<<endl<<obj.get_fine()<<endl;
				getch();
			}
		break;
		case 12:
		break;

        default:
            cout << "\a";
            adminmenu();
            break;*/
    }
}						
	
		



int main(){ 
char ch;

handler hand2;
system("cls");
start();
do{
	system("cls");
	cout<<"\n\n\n\t MAIN MENU";
	cout<<"\n\n\n\t1 BOOK ISSUE";
	cout<<"\n\n\n\t2 BOOK DEPOSIT";
	cout<<"\n\n\n\t3 ADMINISTRATOR MENU"; 
	cout<<"\n\n\n\t4 STUDENT  MENU"; 
	cout<<"\n\n\n\t5 EXIT";
	cout<<"\n\n\n\t PLEASE SELECT YOUR OPTION(1-5)"; 
	 
	ch = getche();
	switch(ch)
	{ case '1': hand2.bookissue(); 
	  break;
	  case '2': {
	  			hand2.bookdeposit();
				Fine obj;
				
				char num1[6];
				
				obj.calculate_fine(t1);
				cout<<"\nTotal fine is: "<<obj.get_fine()<<endl;
				getch();
	  	
		break;
	  }
	  		
	  break;
	  case '3': 
	  adminmenu();
	  break;
	  case '4':
	  	studentmenu();
	  	break;
	  case '5': 
	  exit(0); 
	  break;
	  default:
	  cout<<"INVALID CHOICE"; 
	  
	}         
}while(ch!=5 ); 


	return 0;
}
