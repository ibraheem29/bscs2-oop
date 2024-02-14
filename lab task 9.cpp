#include<iostream>
using namespace std;
class patient{
	protected:
		char name[10];
		char id[10];
		char cell[10];
		char docname[10];
		char disease[10];
		char precs[10];
		char res[10];
		public:
			patient(){
				name[0]='\0';
		 		id[0]='\0';
		 		cell[0]='\0';
		 		docname[0]='\0';
				disease[0]='\0';
				precs[0]='\0';
		 		res[0]='\0';
			}
			patient(char n,char i,char c,char d,char di,char p,char r){
				name[0]='n';
		 		id[0]='i';
		 		cell[0]='c';
		 		docname[0]='d';
				disease[0]='di';
				precs[0]='p';
		 		res[0]='r';				
			}
			char* get_name(){
				return name;
			}
			char* get_id(){
				return id;
			}
			char* get_cell(){
				return cell;
			}
			char* get_docname(){
				return docname;
			}
			char* get_disease(){
				return disease;
			}
			char* get_precs(){
				return precs;
			}
			char* get_res(){
				return res;
			}
			void set_name(){
				
			}
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
};
int main(){
	
}

