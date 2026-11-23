// UVa 10019 - Funny Encryption Method
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--) {
        string n;cin>>n;
        cout << bitset<64>(stoull(n)).count() << ' '
             << bitset<64>(stoull(n,nullptr,16)).count() << '\n';
    }
}
