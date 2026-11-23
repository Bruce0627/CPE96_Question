// UVa 10324 - Zeros and Ones
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc=0;
    for (string bits; cin >> bits;) {
        vector<int> prefix(bits.size()+1);
        for (size_t i=0;i<bits.size();++i) prefix[i+1]=prefix[i]+(bits[i]=='1');
        int q; cin >> q;
        cout << "Case " << ++tc << ":\n";
        while (q--) {
            int a,b; cin >> a >> b;
            if (a>b) swap(a,b);
            int ones=prefix[b+1]-prefix[a];
            cout << (!ones || ones==b-a+1 ? "Yes\n" : "No\n");
        }
    }
}
