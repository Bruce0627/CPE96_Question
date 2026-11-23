// UVa 264 - Count on Cantor
#include <bits/stdc++.h>

using namespace std;

int main() {
    for(long long n;cin>>n;) {
        long long diagonal=(sqrt(8.0L*n+1)-1)/2;
        if(diagonal*(diagonal+1)/2<n) ++diagonal;
        long long a=n-diagonal*(diagonal-1)/2,b=diagonal+1-a;
        if(diagonal%2) swap(a,b);
        cout << "TERM " << n << " IS " << a << '/' << b << '\n';
    }
}
