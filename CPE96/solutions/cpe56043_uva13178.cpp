// CPE 56043 | UVa 13178 | Is it multiple of 3?
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        long long n; cin >> n;
        // Concatenation preserves the sum of residues modulo 3.
        cout << (n*(n+1)/2 % 3 == 0 ? "YES\n" : "NO\n");
    }
}
