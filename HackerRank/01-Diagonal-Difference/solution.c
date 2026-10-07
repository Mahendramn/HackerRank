#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    if (!(std::cin >> n)) {
        return 0;
    }

    int primary_sum = 0;
    int secondary_sum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int val;
            std::cin >> val;
            if (i == j) {
                primary_sum += val;
            }
            if (i + j == n - 1) {
                secondary_sum += val;
            }
        }
    }

    std::cout << std::abs(primary_sum - secondary_sum) << "\n";
    return 0;
}