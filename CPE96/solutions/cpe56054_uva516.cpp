// CPE 56054 | UVa 516 | Prime Land
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (string line; getline(cin, line) && line != "0"; ) {
        istringstream input(line);
        int p, exponent, n = 1;
        while (input >> p >> exponent) while (exponent--) n *= p;
        --n;
        vector<pair<int,int>> factors;
        for (p = 2; p <= n / p; ++p) if (n % p == 0) {
            exponent = 0;
            do { n /= p; ++exponent; } while (n % p == 0);
            factors.emplace_back(p, exponent);
        }
        if (n > 1) factors.emplace_back(n, 1);
        for (auto it = factors.rbegin(); it != factors.rend(); ++it) {
            if (it != factors.rbegin()) cout << ' ';
            cout << it->first << ' ' << it->second;
        }
        cout << '\n';
    }
}
