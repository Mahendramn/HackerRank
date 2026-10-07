#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<vector<int>> arr(n);
    int lastAnswer = 0;

    for (int i = 0; i < q; ++i) {
        int type, x, y;
        cin >> type >> x >> y;

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            arr[idx].push_back(y);
        } else if (type == 2) {
            lastAnswer = arr[idx][y % arr[idx].size()];
            cout << lastAnswer << "\n";
        }
    }

    return 0;
}