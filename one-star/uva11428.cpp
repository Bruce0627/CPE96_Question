// UVa 11428 - Cubes
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long n; cin>>n && n;) {
        bool found=false;
        for (long long y=1;3*y*y+3*y+1<=n;++y) {
            long long target=n+y*y*y;
            long long x=llround(cbrt(static_cast<long double>(target)));
            if (x*x*x==target) { cout << x << ' ' << y << '\n'; found=true; break; }
        }
        if (!found) cout << "No solution\n";
    }
}
