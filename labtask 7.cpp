#include<iostream>
using namespace std;

class basicshape {
protected:
    double area;
public:
    basicshape() {
        area = 0.0;
    }
    basicshape(double a) {
        area = a;
    }
    virtual void getarea() = 0;
    virtual void setarea() = 0;
    virtual void calarea() = 0;
};

class circle : public basicshape {
    long centerX;
    long centerY;
    double radius;

public:
    circle() : basicshape() {
        centerX = 0.0;
        centerY = 0.0;
        radius = 0.0;
    }

  virtual  void setarea() {
        cout << "enter x axis :";
        cin >> centerX;
        cout << "Enter y axis :";
        cin >> centerY;
        cout << "Enter radius of circle : " << endl;
        cin >> radius;
    }

   virtual void getarea() {
        cout << "area of circle is : " << area << endl;
        cout << "x axis is : " << centerX << endl;
        cout << "Y axis is : " << centerY << endl;
    }

    virtual void calarea() {
        area = (22.0 / 7) * radius * radius;
    }

    circle(double a, long x, long y, double r) : basicshape(a) {
        centerX = x;
        centerY = y;
        radius = r;
    }

    long get_centerx() {
        return centerX;
    }

    long get_centery() {
        return centerY;
    }
};

class rectangle : public basicshape {
    long width;
    long length;

public:
    rectangle() : basicshape() {
        width = 0.0;
        length = 0.0;
    }

    rectangle(double a, long w, long l) : basicshape(a) {
        width = w;
        length = l;
    }

    long get_width() {
        return width;
    }

    long get_length() {
        return length;
    }

    void setarea() {
        cout << "enter the length : ";
        cin >> length;
        cout << "Enter the width : ";
        cin >> width;
    }

    void calarea() {
        area = length * width;
    }

    void getarea() {
        cout << "Area of rectangle is : " << area << endl;
    }
};

int main() {
     int arr = 5;
    basicshape* obj[arr];

    for (int i = 0; i < arr; ++i) {
        char option;
        cout << "Enter 'c' for circle or 'r' for rectangle: ";
        cin >> option;

        if (option == 'c' || option == 'C') {
            obj[i] = new circle;
            obj[i]->setarea();
            obj[i]->calarea();
            obj[i]->getarea();
        } else if (option == 'r' || option == 'R') {
            obj[i] = new rectangle;
            obj[i]->setarea();
            obj[i]->calarea();
            obj[i]->getarea();
        } else {
            cout << "Invalid option. " << endl;
        	--i;
        }
    }


    return 0;
}

