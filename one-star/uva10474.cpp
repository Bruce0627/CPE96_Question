// UVa 10474 - Where is the Marble?
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc=0;
    for (int n,q; cin >> n >> q && (n||q);) {
        vector<int> a(n);
        for (int &x : a) cin >> x;
        sort(a.begin(),a.end());
        cout << "CASE# " << ++tc << ":\n";
        while (q--) {
            int x; cin >> x;
            auto it=lower_bound(a.begin(),a.end(),x);
            cout << x;
            if (it!=a.end() && *it==x) cout << " found at " << it-a.begin()+1 << '\n';
            else cout << " not found\n";
        }
    }
}
