// UVa 10812 - Beat the Spread!
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--) {
        long long sum,difference;cin>>sum>>difference;
        if(difference>sum || (sum-difference)%2) cout << "impossible\n";
        else cout << (sum+difference)/2 << ' ' << (sum-difference)/2 << '\n';
    }
}
