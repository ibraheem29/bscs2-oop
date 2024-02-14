#include<iostream>
using namespace std;

class Time {
private:
    int min;
    int hour;

public:
    Time() {
        min = 0;
        hour = 0;
    }

    Time(int m, int h) {
        min = m;
        hour = h;
    }

    Time operator+(const Time& a) {
        Time res;
        res.min = min + a.min;
        res.hour = hour + a.hour;

        // Adjusting overflow of minutes
        if (res.min >= 60) {
            res.min -= 60;
            res.hour++;
        }

        return res;
    }

    void getTimeFromUser() {
        cout << "Enter time in minutes: ";
        cin >> min;
        cout << "Enter time in hours: ";
        cin >> hour;
    }

    void display() const {
        cout << "Time: " << hour << " hours and " << min << " minutes" << endl;
    }
};

int main() {
    Time obj1, obj2;

    cout << "Enter details for Time 1:\n";
    obj1.getTimeFromUser();

    cout << "\nEnter details for Time 2:\n";
    obj2.getTimeFromUser();

    Time result = obj1 + obj2;

    cout << "\nResult:\n";
    result.display();

    return 0;
}

