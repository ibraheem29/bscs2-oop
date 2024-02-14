#include<bits/stdc++.h> // isdigit
#include<iostream>
#include<conio.h>
#include<iomanip> //input-output manipulator
#include<string.h>
#include<fstream>
#include<string>
#include <unistd.h>
using namespace std;
class book
{
	char bno[6];//bookno.
	char bname[70];//bookname
	char aname[20];//authorname
	public:
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
		cout<<"\nENTER BOOK NAME : ";
		getbook();
		
		cout<<"\n\n\nBook Created..";
		
	}
	void getbook(){
		cin.ignore();
		cin.getline(bname,69);
	
	//	cout<<".................";
		cout<<"\nENTER AUTHOR NAME : ";
		cin.getline(aname,19);
		
		
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

		int i=0;
		cout<<bno<<setw(30)<<bname<<setw(30)<<aname<<endl;
		
	}
};//class ends here

class student{

	protected:
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
		 while(f1.read((char *)&ob,sizeof(student)))
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
		    ptr = strtok(issue_date, "/");   //token slash "/"
 
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
		void writebook()
{
	char ch;
	fp.open("book.txt",ios::out|ios::app);//write and append data
	do{
		system("cls");
		bk.createbook();
		
		fp.write((char*)&bk,sizeof(book));//size of class
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
	int found=0;//seach book of given data
	again3:
	system("cls");
	cout<<"\n\nMODIFY BOOK RECORD...";
	cout<<"\n\nEnter the book no. ";
	cin>>n;
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
	    	goto again3;
		}
	fp.open("book.txt",ios::in|ios::out);
	while(fp.read((char*)&bk,sizeof(book)) && found==0)
	{
		if(strcmpi(bk.retbno(),n)==0)
		{
			bk.showbook();
			cout<<"\nEnter the new details book";
			bk.modifybook();
			int pos=-1*sizeof(bk); 
			fp.seekp(pos,ios::cur);//back from current position
			fp.write((char *)&bk,sizeof(book));
			cout<<"\n\nRecord Updated";
			found=1;
		}
			
	}
	fp.close();
	if(found==0)
	{
		cout<<"\n\nRecord Not Found";
		
	}
	getch();//press key to get out	
}
 void modifystudent()
{
	char n[6];
	int found=0;//seach book of given data
	system("cls");
	cout<<"\n\nMODIFY STUDENT RECORD...";
	cout<<"\n\nEnter the Admission no. ";
	cin>>n;
	fp.open("student.txt",ios::in|ios::out);
	while(fp.read((char*)&st,sizeof(student)) && found==0)
	{
		if(strcmpi(st.retadmno(),n)==0)
		{
			st.showstudent();
			cout<<"\nEnter the new details of student";
			st.modifystudent();
			int pos=-1*sizeof(st);
			fp.seekp(pos,ios::cur);//back from current position
			fp.write((char *)&st,sizeof(student)); 
			cout<<"\n\nRecord Updated";
			found=1;
		}
			
	}
	fp.close();

	try {
        
        for(int i=0;n[i]!='\0';i++)
        {
        	if(!isdigit(n[i])) // built in fun , batata hai woh haii yaa naii digit 
        		throw"The input is not a number. Invalid Input.......\n";
		}
		
		if (found==0){
			
            throw "Record not found..........\n";
        }
    }
    
    
    catch(const char* err){
    	cout<<err;
	}
	
	
	getch();//press key to get out	
}

 
 void deletestudent()
 {
	 char n[6];
	 int flag=0;
	 system("cls");
	 cout<<"\n\n\n\tDELETE STUDENT...";
	 cout<<"\n\nEnter the Admission no> : ";
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
	 		throw "the input is not a number... Enter number";
		 }
		 if(flag==0){
		 	throw "Record not found ";
		 }
	 	
	 }
	 catch(const char* errrr){
	 	cout<<errrr;
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
	 cout<<"==================================================================\n";
	 cout<<"Book No."<<setw(20)<<"\tBook Name"<<setw(25)<<"\t\tBook Author\n";
	 cout<<"==================================================================\n";
	 while(fp.read((char*)&bk,sizeof(book)))
	 {
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
				cout<<"\n\n\tEnter The Book No.";
			 	cin>>bn;
				//restart2:
				
				
				cout<<endl;	 
			 	cout<<"Enter Number of Days for which you want  to borrow the book : ";
			 	
			 	
			cin>>bk_day;
			while(bk_day <= 0 || bk_day >65)
			{
				cout<<"Invalid Input. It should be a number between 1 to 65, Enter again : ";
				cin>>bk_day;
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
					  
					
			  }
		 }
		 if(flag==0)
		 {
			 cout<<"Book No. Does Not Exists";
		 }
	}
		  
		 

	 
	 else
	 {
		 
		 cout<<"You Have Not Returned The Last Book";
		 
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
/* if(found==0)
 {
	 cout<<"Student Record Not Exists...";
	 
 }

 getch();
  
 fp.close();
 fp1.close();
 }*/
 
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
	 cout<<"deposit date (dd/mm/yy) : ";
	 cin.ignore();
	 cin.getline(deposit_date,11);
	 is_deposited=1;
	 fp.open("student.txt",ios::in|ios::out);
	 fp1.open("book.txt",ios::in|ios::out);
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
};
 
 
void start()
{ system("cls");
cout<<"\n\n\n\n\n\n\t\t\t\tLIBRARY";

cout<<"\n\n\t\t\t\tMANAGEMENT";

cout<<"\n\n\t\t\t\tSYSTEM";
cout<<" \n\t\t\t\t By: ibraheem qasim"; 
getch();
}
void adminmenu()
{	
 int ch2;
    	handler hand; 

    system("cls");

    cout << "\n\n\n\tADMINISTRATOR MENU";
    cout << "\n\n\n\t1.CREATE STUDENT RECORD";
    cout << "\n\n\n\t2.DISPLAY ALL STUDENT RECORD";
    cout << "\n\n\n\t3.DISPLAY SPECIFIC STUDENT RECORD";
    cout << "\n\n\n\t4.MODIFY STUDENT RECORD";
    cout << "\n\n\n\t5.DELETE STUDENT RECORD";
    cout << "\n\n\n\t6.CREATE BOOK";
    cout << "\n\n\n\t7.DISPLAY ALL BOOKS";
    cout << "\n\n\n\t8.DISPLAY SPECIFIC BOOK";
    cout << "\n\n\n\t9.MODIFY BOOK RECORD";
    cout << "\n\n\n\t10.DELETE BOOK RECORD";
    cout << "\n\n\n\t11.CHECK FINE ";
    cout << "\n\n\n\t12.BACK TO MAIN MENU";

    cout << "\n\n\n\tPLEASE ENTER YOUR CHOICE(1-12)";
    
    while (!(cin >> ch2)) {
        // Invalid input, clear error flag and discard the input
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Invalid input. Please enter a number (1-12): ";
    }

    system("cls");

    switch (ch2) {
        case 1:
            hand.writestudent();
            break;
        case 2:
            hand.displayalls();
            break;
        case 3:
            char num[6];
            system("cls");
            cout << "\n\n\t Please enter admission no.";
            cin >> num;
            hand.displaysps(num);
            break;
        		case 4: hand.modifystudent();
		break;
		case 5:hand.deletestudent();
		break;
		case 6:hand.writebook();
		break;
		case 7:hand.displayallb();
		break;
		case 8:
	    {char num[6];
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
            break;
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
	cout<<"\n\n\n\t4 EXIT";
	cout<<"\n\n\n\t PLEASE SELECT YOUR OPTION(1-4)"; 
	 
	ch=getche();
	switch(ch)
	{ case '1': hand2.bookissue(); 
	  break;
	  case '2': {
	  			hand2.bookdeposit();
				Fine obj;
				
				char num1[6];
				
				obj.calculate_fine(t1);
				cout<<"Total fine is\n "<<obj.get_fine()<<endl;
				getch();
	  	
		break;
	  }
	  		
	  break;
	  case '3': 
	  adminmenu();
	  break;
	  case '4': 
	  exit(0); 
	  break;
	  default:
	  cout<<"INVALID CHOICE"; 
	  
	}         
}while(ch!=4 ); 


	return 0;
}
