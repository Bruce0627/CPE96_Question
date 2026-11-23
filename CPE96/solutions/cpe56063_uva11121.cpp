// CPE 56063 | UVa 11121 | Base -2
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    for (int tc = 1; tc <= tests; ++tc) {
        long long n; cin >> n;
        string digits;
        do {
            int bit = (n % 2 + 2) % 2;
            digits += char('0'+bit);
            n = (n-bit)/(-2);
        } while (n);
        reverse(digits.begin(), digits.end());
        cout << "Case #" << tc << ": " << digits << '\n';
    }
}
