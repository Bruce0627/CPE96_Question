// CPE 56112 | UVa 10943 | How do you add?
#include <bits/stdc++.h>

using namespace std;

int main() {
    constexpr int limit=200, mod=1000000;
    int choose[limit+1][limit+1]{};
    for (int n = 0; n <= limit; ++n) {
        choose[n][0] = choose[n][n] = 1;
        for (int k = 1; k < n; ++k)
            choose[n][k] = (choose[n-1][k-1]+choose[n-1][k])%mod;
    }
    for (int n,k; cin >> n >> k && (n || k); )
        cout << choose[n+k-1][k-1] << '\n';
}
