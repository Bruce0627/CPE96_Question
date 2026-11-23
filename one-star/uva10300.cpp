// UVa 10300 - Ecological Premium
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long total=0;
        while (n--) { long long area, animals, factor; cin >> area >> animals >> factor; total+=area*factor; }
        cout << total << '\n';
    }
}
