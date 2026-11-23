// CPE 56092 | UVa 10365 | Blocks
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        long long n; cin >> n;
        long long best = 4*n+2;
        for (long long a = 1; a <= n/a/a; ++a) {
            if (n%a != 0) continue;
            long long rest = n/a;
            for (long long b = a; b <= rest/b; ++b) {
                if (rest%b != 0) continue;
                long long c = rest/b;
                best = min(best, 2*(a*b+b*c+c*a));
            }
        }
        cout << best << '\n';
    }
}
