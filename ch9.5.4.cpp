#include <iostream>
#include <string>

using namespace std;

int main() {
    string a = "15";
    cout << a.compare("111") << endl; // a > "111"
    cout << a.compare("15") << endl;  // a = "15"
    cout << a.compare("68") << endl;  // a < "68"
    cout << a.compare("0") << endl;   // a > "0"
    return 0;
}
