#include<iostream>
#include<cstring>
using namespace std;
class base{
	int size;
	char* bufferptr;
	char* ptr;
	public:
		base(){
			
		}
		base(char* ptr){
					if(ptr!=NULL){
				size=strlen(ptr);
				bufferptr=new char[size+1];
				strcpy(bufferptr,ptr);
				
			}
			else{
				bufferptr=NULL;
				size=0;
				
			}
		}
		base(base& rhs){
				
			size=rhs.size;
			if(rhs.size!=0){
				bufferptr=new char[size+1];
				strcpy(bufferptr,ptr);
			}
			else{
					bufferptr=NULL;
						size=0;
			}
		
			
		}
		void operator=(const base & rhs){
			size=rhs.size;
			if(rhs.size!=0){
				delete []bufferptr;
				bufferptr=new char[rhs.size+1];
				strcpy(bufferptr,rhs.bufferptr);
			}
			else{
					bufferptr=NULL;
					
			}
		
		}
		void display(){
			cout<<bufferptr;
		}
		
};
int main(){
	base obj1("ABC");
	base obj2("DE");
	obj1=obj2;
	obj1.display();
}
