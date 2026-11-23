// UVa 10101 - Bangla Numbers
#include <bits/stdc++.h>

using namespace std;

void bangla(long long n) {
    if(n>=10000000) { bangla(n/10000000); cout << " kuti"; n%=10000000; }
    if(n>=100000) { cout << ' ' << n/100000 << " lakh"; n%=100000; }
    if(n>=1000) { cout << ' ' << n/1000 << " hajar"; n%=1000; }
    if(n>=100) { cout << ' ' << n/100 << " shata"; n%=100; }
    if(n) cout << ' ' << n;
}
int main() {
    int tc=0;
    for(long long n;cin>>n;) {
        cout << setw(4) << ++tc << '.';
        if(n) bangla(n);
        else cout << " 0";
        cout << '\n';
    }
}
