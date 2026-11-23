// CPE 56111 | UVa 530 | Binomial Showdown
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long n,k; cin >> n >> k && (n || k); ) {
        k = min(k,n-k);
        long long answer = 1;
        for (long long i = 1; i <= k; ++i) answer = answer*(n-i+1)/i;
        cout << answer << '\n';
    }
}
