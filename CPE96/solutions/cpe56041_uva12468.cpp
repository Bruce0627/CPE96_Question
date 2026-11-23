// CPE 56041 | UVa 12468 | Zapping
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int a,b; cin >> a >> b && a != -1; ) {
        int distance = abs(a-b);
        cout << min(distance, 100-distance) << '\n';
    }
}
