#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    unordered_map<string, int> freq;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        freq[s]++;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        string query;
        cin >> query;
        
        auto it = freq.find(query);
        if (it != freq.end()) {
            cout << it->second << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}