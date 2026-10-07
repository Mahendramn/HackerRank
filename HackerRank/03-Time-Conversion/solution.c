#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    if (!(cin >> s)) return 0;

    int hour = stoi(s.substr(0, 2));
    string period = s.substr(8, 2);
    string middle = s.substr(2, 6);

    if (period == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    } else { // PM
        if (hour != 12) {
            hour += 12;
        }
    }

    string hh = (hour < 10 ? "0" : "") + to_string(hour);
    cout << hh + middle << "\n";

    return 0;
}