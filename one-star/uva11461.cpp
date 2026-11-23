// UVa 11461 - Square Numbers
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int a,b; cin>>a>>b && (a||b);)
        cout << max(0,int(floor(sqrt(b))-ceil(sqrt(a))+1)) << '\n';
}
