// UVa 10783 - Odd Sum
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    for(int tc=1;tc<=t;++tc) {
        long long a,b;cin>>a>>b;
        if(a%2==0) ++a;
        if(b%2==0) --b;
        cout << "Case " << tc << ": " << (a>b?0:((b-a)/2+1)*(a+b)/2) << '\n';
    }
}
