// UVa 11417 - GCD
#include <bits/stdc++.h>

using namespace std;

int main() {
    array<long long,501> total{};
    for(int n=2;n<=500;++n) {
        total[n]=total[n-1];
        for(int i=1;i<n;++i) total[n]+=gcd(i,n);
    }
    for(int n;cin>>n && n;) cout << total[n] << '\n';
}
