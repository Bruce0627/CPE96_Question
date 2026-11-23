// CPE 56122 | UVa 11369 | Shopaholic
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        int n; cin >> n;
        vector<int> prices(n);
        for (int &price : prices) cin >> price;
        sort(prices.rbegin(), prices.rend());
        int discount = 0;
        for (int i = 2; i < n; i += 3) discount += prices[i];
        cout << discount << '\n';
    }
}
