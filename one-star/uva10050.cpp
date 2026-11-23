// UVa 10050 - Hartals
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--) {
        int n,p;cin>>n>>p;
        vector<bool> stopped(n+1);
        while(p--) {
            int h;cin>>h;
            for(int day=h;day<=n;day+=h) if(day%7!=6 && day%7!=0) stopped[day]=true;
        }
        cout << count(stopped.begin(),stopped.end(),true) << '\n';
    }
}
