#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    bool leap = false;

    if(year % 4 == 0) {
        if(year % 100 == 0) {
            if(year % 400 == 0) {
                leap = true;
            }
        } else {
            leap = true;
        }
    }
    if(leap) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}

bool is_leap_year(int year)
{
    if(year & 3)
      return false;
    else if(year % 100 == 0)
      return year % 400 == 0;
    else
      return true;
}