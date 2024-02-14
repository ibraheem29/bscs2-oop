#include <iostream>
using namespace std;

int main() {
    int value1;
    double value2;
    cout << "Enter an integer value for value1: ";
    cin >> value1;
    cout << "Enter a double value for value2: ";
    cin >> value2;

    try {
        if (value1 < 0 || value2 < 0) {
            throw "Error: Values cannot be negative.";
        }
        if (value2 == 0) {
            throw "Error: value2 cannot be equal to 0.";
        }
        int sum = value1 + value2;
        if (sum > 20) {
            throw "Sum of values cannot be greater than 20.";
        }
       
}
