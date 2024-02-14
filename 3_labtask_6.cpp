#include<iostream>
using namespace std;

class student {
protected:
    string name;
    int age;
    string department;

public:
    student() {
        name = "";
        age = 0;
        department = "";
    }

    student(string n, int a, string d) {
        name = n;
        age = a;
        department = d;
    }

    void set_student_info(string n, int a, string d) {
        name = n;
        age = a;
        department = d;
    }

    string get_student_info() {
        return name;
    }
};

class result : public student {
protected:
    int obtainedMarks;
    double percentage;
    string grade;

public:
    result() {
        obtainedMarks = 0;
        percentage = 0.0;
        grade = "";
    }

    result(string n, int a, string d, int marks) : student(n, a, d) {
        obtainedMarks = marks;
       
    }

    void set_result(int marks) {    	
        obtainedMarks = marks;       
    }
    double get_result() {
        return obtainedMarks / 100.0;
    }
    void cal(){
    	cout<<"enter name :";
    	cin>>name;
    	cout<<"enter age : ";
    	cin>>age;
    	cout<<"enter department : ";
    	cin>>department;
    	cout<<"enter marks : ";
    	cin>> obtainedMarks;
	}
    void display(){
    	cout<<"name : "<<name<<endl;
    	cout<<"age : "<<age<<endl;
    	cout<<"department : "<<department<<endl;
    	
	}
};

int main() {
    result obj;
    obj.cal();
    obj.display();
    cout << "Obtained Marks: " << obj.get_result()<< endl;

    return 0;
}

