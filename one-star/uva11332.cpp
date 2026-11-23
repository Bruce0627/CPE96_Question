// UVa 11332 - Summing Digits
#include <bits/stdc++.h>

using namespace std;

int main() {
    for(long long n;cin>>n && n;) cout << 1+(n-1)%9 << '\n';
}
