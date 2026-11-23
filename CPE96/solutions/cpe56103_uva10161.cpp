// CPE 56103 | UVa 10161 | Ant on a Chessboard
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long n; cin >> n && n; ) {
        long long side = sqrt(static_cast<long double>(n));
        if (side*side < n) ++side;
        long long distance = side*side-n;
        long long x=side, y=distance+1;
        if (distance >= side) { x=2*side-1-distance; y=side; }
        if (side%2) swap(x,y);
        cout << x << ' ' << y << '\n';
    }
}
