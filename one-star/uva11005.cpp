// UVa 11005 - Cheapest Base
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    for(int tc=1;tc<=t;++tc) {
        array<int,36> prices;
        for(int &price:prices) cin>>price;
        int q;cin>>q;
        if(tc>1) cout << '\n';
        cout << "Case " << tc << ":\n";
        while(q--) {
            long long n;cin>>n;
            array<int,37> cost{};
            int best=numeric_limits<int>::max();
            for(int base=2;base<=36;++base) {
                long long value=n;
                do { cost[base]+=prices[value%base]; value/=base; } while(value);
                best=min(best,cost[base]);
            }
            cout << "Cheapest base(s) for number " << n << ':';
            for(int base=2;base<=36;++base) if(cost[base]==best) cout << ' ' << base;
            cout << '\n';
        }
    }
}
