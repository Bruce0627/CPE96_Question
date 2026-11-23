// UVa 406 - Prime Cuts
#include <bits/stdc++.h>

using namespace std;

int main() {
    for(int n,c;cin>>n>>c;) {
        vector<bool> composite(n+1);
        vector<int> primes={1};
        for(int p=2;p<=n;++p) if(!composite[p]) {
            primes.push_back(p);
            if(p<=n/p) for(int k=p*p;k<=n;k+=p) composite[k]=true;
        }
        int size=primes.size(), length=min(size,2*c-size%2);
        cout << n << ' ' << c << ':';
        for(int i=(size-length)/2;i<(size+length)/2;++i) cout << ' ' << primes[i];
        cout << "\n\n";
    }
}
