#include<iostream>
using namespace std;
class mike{
	public:
		float height;
		float radius;
		
		mike(){
			height=0.0;
			radius=0.0;
		}
		mike(float h,float r){
			height=h;
			radius=r;
		}
		void display(){
			cout<<"height is : "<<height<<endl;
			cout<<"radius is : "<<radius<<endl;
		}
		float set_height(int h){
			height = h;
			return height;
			
		}
		float set_radius(float r){
			radius = r;
			return radius;
		}
		void cal(){
			float vol;
			vol=(22/7)*radius*2*height;
			cout<<"vol is "<<vol<<endl;
			
		}
};
int main(){
	mike obj;
	obj.set_height(2.0);
	obj.set_radius(3.0);
	obj.display();
	obj.cal();
}
