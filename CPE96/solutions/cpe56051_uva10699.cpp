// CPE 56051 | UVa 10699 | Count the factors
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int n; cin >> n && n; ) {
        int remaining = n, count = 0;
        for (int p = 2; p <= remaining / p; ++p) if (remaining % p == 0) {
            ++count;
            do { remaining /= p; } while (remaining % p == 0);
        }
        cout << n << " : " << count + (remaining > 1) << '\n';
    }
}
