#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a(3);
    vector<int> b(3);

    for (int i = 0; i < 3; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < 3; ++i) {
        cin >> b[i];
    }

    int alice_score = 0;
    int bob_score = 0;

    for (int i = 0; i < 3; ++i) {
        if (a[i] > b[i]) {
            alice_score++;
        } else if (a[i] < b[i]) {
            bob_score++;
        }
    }

    cout << alice_score << " " << bob_score << "\n";

    return 0;
}