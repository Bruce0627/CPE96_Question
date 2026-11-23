// UVa 11059 - Maximum Product
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc=0;
    for (int n; cin>>n;) {
        vector<long long> a(n);
        for (auto &x : a) cin>>x;
        long long best=0;
        for (int i=0; i<n; ++i) {
            long long product=1;
            for (int j=i; j<n; ++j) { product*=a[j]; best=max(best,product); }
        }
        cout << "Case #" << ++tc << ": The maximum product is " << best << ".\n\n";
    }
}
