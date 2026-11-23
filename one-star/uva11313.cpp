// UVa 11313 - Gourmet Games
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int n,m; cin>>n>>m;
        if ((n-1)%(m-1)) cout << "cannot do this\n";
        else cout << (n-1)/(m-1) << '\n';
    }
}
