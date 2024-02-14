#include<iostream>
using namespace std;

class complex {
    float real, img;

public:
    complex() {
        real = 0.0;
        img = 0.0;
    }

    complex(float r, float i) {
        real = r;
        img = i;
    }

    friend ostream& operator<<(ostream& o,  complex& c) {
        o << '(' << c.real << ',' << c.img << ')';
        return o;
    }

    friend istream& operator>>(istream& is, complex& c) {
        is >> c.real>>c.img;
       // is >> c.img;
        return is;
    }
};

int main() {
    complex c1(2.5, 5.7);
    cin >> c1;
    cout << c1;

    return 0;
}

