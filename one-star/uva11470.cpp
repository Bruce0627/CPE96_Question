// UVa 11470 - Square Sums
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc=0;
    for(int n;cin>>n && n;) {
        vector<long long> sums((n+1)/2);
        for(int r=0;r<n;++r)
            for(int c=0;c<n;++c) {
                long long value;cin>>value;
                sums[min({r,c,n-1-r,n-1-c})]+=value;
            }
        cout << "Case " << ++tc << ':';
        for(long long sum:sums) cout << ' ' << sum;
        cout << '\n';
    }
}
