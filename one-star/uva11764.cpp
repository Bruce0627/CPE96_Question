// UVa 11764 - Jumping Mario
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    for(int tc=1;tc<=t;++tc) {
        int n,previous,high=0,low=0;cin>>n>>previous;
        for(int i=1;i<n;++i) {
            int current;cin>>current;
            high+=current>previous; low+=current<previous;
            previous=current;
        }
        cout << "Case " << tc << ": " << high << ' ' << low << '\n';
    }
}
