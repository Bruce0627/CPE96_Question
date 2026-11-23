// CPE 56104 | UVa 10920 | Spiral Tap
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long size,p; cin >> size >> p && size; ) {
        long long side = sqrt(static_cast<long double>(p));
        if (side*side < p) ++side;
        if (side%2 == 0) ++side;
        long long row=(size+side)/2, col=row, distance=side*side-p;
        const int dr[] = {-1,0,1,0}, dc[] = {0,-1,0,1};
        for (int i = 0; i < 4; ++i) {
            long long steps = min(distance, side-1);
            row += steps*dr[i];
            col += steps*dc[i];
            distance -= steps;
        }
        cout << "Line = " << row << ", column = " << col << ".\n";
    }
}
