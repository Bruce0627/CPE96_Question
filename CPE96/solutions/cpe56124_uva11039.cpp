// CPE 56124 | UVa 11039 | Building designing
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        int n; cin >> n;
        vector<int> floors(n);
        for (int &floor : floors) cin >> floor;
        sort(floors.begin(), floors.end(), [](int a,int b) { return abs(a)>abs(b); });
        int count = 0, previous = 0;
        for (int floor : floors) {
            int sign = floor > 0 ? 1 : -1;
            if (sign == previous) continue;
            ++count;
            previous = sign;
        }
        cout << count << '\n';
    }
}
