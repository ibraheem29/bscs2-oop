#include<iostream>
#include <fstream>
using namespace std;



int main()
{

ofstream myfile;
myfile.open("file1.txt");
int a =5;
myfile <<"all is well ";
myfile << a;
myfile.close();
return 0;
}