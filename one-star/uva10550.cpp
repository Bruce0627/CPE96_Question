// UVa 10550 - Combination Lock
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int a,b,c,d; cin>>a>>b>>c>>d && (a||b||c||d);)
        cout << 1080+9*((a-b+40)%40+(c-b+40)%40+(c-d+40)%40) << '\n';
}
