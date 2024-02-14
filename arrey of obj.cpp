#include<iostream>

using namespace std;

class MyClass{

public:

void method(int i){

cout<<"object "<<i<<" "<<i+1<<endl;}

};

int main(){

MyClass obj1, obj2,obj3,obj4,obj5;

MyClass* array_of_objects[5];
for(int i=0; i<5; i++){

array_of_objects[i]->method(i);}

}

