// CPE 56053 | UVa 993 | Product of digits
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        int n; cin >> n;
        if (n < 10) { cout << n << '\n'; continue; }
        string digits;
        for (int d = 9; d >= 2; --d)
            while (n % d == 0) { digits += char('0'+d); n /= d; }
        reverse(digits.begin(), digits.end());
        cout << (n == 1 ? digits : "-1") << '\n';
    }
}
