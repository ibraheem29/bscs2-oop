#include<iostream>
using namespace std;

//int sum(int i, int j){
//	cout<<"values with integer were summed"<<endl;
//	return i + j;
//}
//
//double sum(double i, double j){
//	cout<<"values with double were summed"<<endl;
//	return i + j;
//}
template <typename f, typename t = int>
t sum(t i, f j){
	return i + j;
}
int main(){
	cout<<"result of sum is: "<<sum<float>(1.4,4.5);
}
