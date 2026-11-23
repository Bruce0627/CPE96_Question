// CPE 56093 | UVa 1225 | Digit Counting
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        int n; cin >> n;
        array<int,10> count{};
        for (int i = 1; i <= n; ++i)
            for (int value=i; value; value/=10) ++count[value%10];
        for (int d = 0; d < 10; ++d) {
            if (d) cout << ' ';
            cout << count[d];
        }
        cout << '\n';
    }
}
