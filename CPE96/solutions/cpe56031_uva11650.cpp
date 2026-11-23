// CPE 56031 | UVa 11650 | Mirror Clock
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        int h, m; char colon; cin >> h >> colon >> m;
        int minutes = (720 - (h % 12 * 60 + m)) % 720;
        h = minutes / 60;
        cout << setfill('0') << setw(2) << (h ? h : 12)
             << ':' << setw(2) << minutes % 60 << '\n';
    }
}
