// UVa 10642 - Can You Solve It?
#include <bits/stdc++.h>

using namespace std;

long long indexOf(long long x,long long y) {
    long long diagonal=x+y;
    return diagonal*(diagonal+1)/2+x;
}
int main() {
    int t;cin>>t;
    for(int tc=1;tc<=t;++tc) {
        long long x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        cout << "Case " << tc << ": " << indexOf(x2,y2)-indexOf(x1,y1) << '\n';
    }
}
