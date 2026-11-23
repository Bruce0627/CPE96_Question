// CPE 56101 | UVa 880 | Cantor Fractions
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long n; cin >> n; ) {
        long long k = (sqrt(8.0L*n + 1)-1)/2;
        if (k*(k+1)/2 < n) ++k;
        long long denominator = n-k*(k-1)/2;
        cout << k+1-denominator << '/' << denominator << '\n';
    }
}
