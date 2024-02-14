#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class student{
	protected:
		char name[10];
		char sapid[10];
		char adress[10];
		public:
			void addstudent(){
				cout<<"\nADD Student : ";
				cin>>name;
				cout<<"\nADD SAP id : ";
				cin>>sapid;
				cout<<"\nEnter adress of student :";
				cin>>adress;
			}
			void showstudent(){
				cout<<"Name of Student : "<<name<<endl;
				cout<<"Sap id : "<<sapid<<endl;
				cout<<"Adress of student : "<<adress<<endl;
								
			}
		
		char* get_name(){
			return name;
		}
		char* get_sapid(){
			return sapid;
		}
		char* get_adress(){
			return adress;
		}
		void studentreport(){
			cout<<"\nStudent details : ";
			cout<<"Name : "<<name<<endl;
			cout<<"sap id :"<<sapid<<endl;
			cout<<"adress :"<<adress<<endl;
		}
		
};
		
class Course{
	protected:
		char course[10];
		char coursenum[10];
		student st;
		fstream fp;
		fstream  coursefile;
		public:	
			void addcourse(){
				system("cls");
				cout<<"\nNEW COURSE ENTRY...\n";
				cout<<"\nENTER COURSE NUMBER. : ";
				cin>>coursenum;
				cout<<"\nENTER COURSE NAME. : ";
				cin>>course;
			 coursefile.open("course.txt",ios::app);
				if(!coursefile){
					cout<<"Error opening file!."<<endl;
					return;
				}
				
				coursefile<<coursenum<<course<<endl;
				coursefile.close();				
			}
			
			void showcourse(){
				cout<<"\ncourse number : "<<coursenum;
				cout<<"\ncourse name : "<<course;
				
			}
							
			void createstudent(){
				char ch;
				fp.open("student.txt",ios::out|ios::app);
				do{
					system("cls");
					st.addstudent();
					fp.write((char*)&st,sizeof(student));
					cout<<"Do you want to add more records ...(y/n) ";
					cin>>ch;					
				}while(ch=='y'||ch=='Y');
				fp.close();
			}
		void coursereport(){
			
			cout<<"\nCourse details : ";
			cout<<"course number : "<<coursenum<<endl;
			cout<<"course name  :"<<course<<endl;
		}
	
		
			
			
};
class admin:public Course{
	protected:
		Course ct;
	public:
			void displayallc(){
			system("cls");
			coursefile.open("course.txt",ios::in);
			if(!coursefile){
				cout<<"File could not open "<<endl;
				getche();
				return;
			}
			 cout<<"\n\n\t\tcourse List\n\n";
			 while(coursefile.read((char*)&ct,sizeof(Course))){
			 	ct.coursereport();
			 }
			 coursefile.close();
			 getche();			
		}
		
		
		
		
		
		
		
		
		
};
int main(){
	
}
