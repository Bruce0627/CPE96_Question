// UVa 10193 - All You Need Is Love!
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    for(int tc=1;tc<=t;++tc) {
        string a,b;cin>>a>>b;
        cout << "Pair #" << tc << ": "
             << (gcd(stoull(a,nullptr,2),stoull(b,nullptr,2))>1 ? "All you need is love!\n" : "Love is not all you need!\n");
    }
}
