// CPE 56052 | UVa 412 | Pi
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int n; cin >> n && n; ) {
        vector<int> values(n);
        for (int &value : values) cin >> value;
        int coprime = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < i; ++j) coprime += gcd(values[i], values[j]) == 1;
        if (!coprime) cout << "No estimate for this data set.\n";
        else cout << fixed << setprecision(6) << sqrt(3.0*n*(n-1)/coprime) << '\n';
    }
}
