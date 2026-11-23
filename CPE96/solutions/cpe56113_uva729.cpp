// CPE 56113 | UVa 729 | The Hamming Distance Problem
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        int n,h; cin >> n >> h;
        string bits = string(n-h,'0') + string(h,'1');
        do { cout << bits << '\n'; }
        while (next_permutation(bits.begin(), bits.end()));
        if (tests) cout << '\n';
    }
}
