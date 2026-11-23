// UVa 10057 - A Mid-Summer Night's Dream
#include <bits/stdc++.h>

using namespace std;

int main() {
    for(int n;cin>>n;) {
        vector<int> a(n);
        for(int &x:a) cin>>x;
        sort(a.begin(),a.end());
        int left=a[(n-1)/2],right=a[n/2];
        cout << left << ' ' << upper_bound(a.begin(),a.end(),right)-lower_bound(a.begin(),a.end(),left)
             << ' ' << right-left+1 << '\n';
    }
}
