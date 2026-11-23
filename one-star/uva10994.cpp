// UVa 10994 - Simple Addition
#include <bits/stdc++.h>

using namespace std;

long long prefix(long long n) {
    long long sum=0;
    while (n>0) {
        long long digit=n%10;
        sum+=45*(n/10)+digit*(digit+1)/2;
        n/=10;
    }
    return sum;
}
int main() {
    for (long long p,q; cin>>p>>q && p>=0 && q>=0;) cout << prefix(q)-prefix(p-1) << '\n';
}
