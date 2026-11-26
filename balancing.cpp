// USACO 2016 February Bronze, Problem 3: Load Balancing
// Try every useful fence pair: a fence only matters just past some cow's
// coordinate (x_i + 1 / y_j + 1), plus 0 for "all cows on one side".
// O(N^3) with N <= 100 is about 10^6 operations.
#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);

    int n, b;
    cin >> n >> b;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    vector<int> as = {0}, bs = {0};
    for (int i = 0; i < n; i++) {
        as.push_back(x[i] + 1);
        bs.push_back(y[i] + 1);
    }

    int best = n;
    for (int a : as) {
        for (int c : bs) {
            int ll = 0, lr = 0, ul = 0, ur = 0;
            for (int i = 0; i < n; i++) {
                bool left = x[i] < a, low = y[i] < c;
                if (left && low) ll++;
                else if (!left && low) lr++;
                else if (left) ul++;
                else ur++;
            }
            best = min(best, max({ll, lr, ul, ur}));
        }
    }

    cout << best << "\n";
    return 0;
}
