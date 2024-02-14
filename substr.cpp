#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    // Take any string
    string s1 = "ibraheem";
 
    // Copy two characters of s1 (starting
    // from position 3)
    string r = s1.substr(3, 2);
 
    // prints the result
    cout << "String is: " << r;
 
    return 0;
}
