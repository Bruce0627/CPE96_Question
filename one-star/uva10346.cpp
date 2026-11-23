// UVa 10346 - Peter's Smokes
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long n,k; cin >> n >> k;) cout << (n ? n+(n-1)/(k-1) : 0) << '\n';
}
