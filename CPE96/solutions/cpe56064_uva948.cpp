// CPE 56064 | UVa 948 | Fibonaccimal Base
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<long long> fib = {1,2};
    while (fib.back() <= 2147483647LL)
        fib.push_back(fib.back() + fib[fib.size()-2]);
    int tests; cin >> tests;
    while (tests--) {
        int n; cin >> n;
        cout << n << " = ";
        string digits;
        for (auto it = fib.rbegin(); it != fib.rend(); ++it) {
            if (*it <= n) { digits += '1'; n -= *it; }
            else if (!digits.empty()) digits += '0';
        }
        cout << (digits.empty() ? "0" : digits) << " (fib)\n";
    }
}
