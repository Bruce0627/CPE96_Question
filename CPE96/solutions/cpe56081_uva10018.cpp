// CPE 56081 | UVa 10018 | Reverse and Add
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        long long n; cin >> n;
        int steps = 0;
        string digits;
        do {
            digits = to_string(n);
            reverse(digits.begin(), digits.end());
            n += stoll(digits);
            ++steps;
            digits = to_string(n);
        } while (!equal(digits.begin(), digits.end(), digits.rbegin()));
        cout << steps << ' ' << n << '\n';
    }
}
