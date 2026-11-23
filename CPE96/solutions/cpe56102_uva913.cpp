// CPE 56102 | UVa 913 | Joana and the Odd Numbers
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long n; cin >> n; ) {
        long long row = (n+1)/2;
        cout << 6*row*row-9 << '\n';
    }
}
