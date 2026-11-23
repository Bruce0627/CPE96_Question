// UVa 10041 - Vito's Family
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--) {
        int n;cin>>n;
        vector<int> a(n);
        for(int &x:a) cin>>x;
        sort(a.begin(),a.end());
        long long distance=0;
        for(int x:a) distance+=abs(x-a[n/2]);
        cout << distance << '\n';
    }
}
