// UVa 11063 - B2-Sequence
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc=0;
    for (int n; cin>>n;) {
        vector<int> a(n);
        for (int &x : a) cin>>x;
        bool valid=a.front()>0;
        for (int i=1;i<n;++i) valid &= a[i]>a[i-1];
        set<int> sums;
        for (int i=0; i<n && valid; ++i)
            for (int j=i; j<n; ++j)
                if (!sums.insert(a[i]+a[j]).second) { valid=false; break; }
        cout << "Case #" << ++tc << ": It is " << (valid?"a":"not a") << " B2-Sequence.\n\n";
    }
}
