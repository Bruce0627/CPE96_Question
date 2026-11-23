// UVa 11172 - Relational Operators
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while (t--) { long long a,b; cin>>a>>b; cout << (a<b?'<':a>b?'>':'=') << '\n'; }
}
