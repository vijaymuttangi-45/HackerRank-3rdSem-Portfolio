#include <bits/stdc++.h>
using namespace std;


 
string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2)) % 12;

    if (s[8] == 'P') {
        hour += 12;
    }

    string hh = (hour < 10 ? "0" : "") + to_string(hour);
    return hh + s.substr(2, 6);   // ":mm:ss"
}

int main() {
    // Example tests
    cout << timeConversion("07:05:45PM") << endl;  // 19:05:45
    cout << timeConversion("12:01:00AM") << endl;  // 00:01:00
    cout << timeConversion("12:45:54PM") << endl;  // 12:45:54
    cout << timeConversion("01:00:00AM") << endl;  // 01:00:00
    return 0;
}