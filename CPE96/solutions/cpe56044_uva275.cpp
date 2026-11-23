// CPE 56044 | UVa 275 | Expanding Fractions
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int a,b; cin >> a >> b && (a || b); ) {
        vector<int> first(b, -1);
        string expansion = ".";
        int remainder = a;
        while (remainder && first[remainder] == -1) {
            first[remainder] = expansion.size();
            remainder *= 10;
            expansion += char('0' + remainder / b);
            remainder %= b;
        }
        for (size_t i = 0; i < expansion.size(); i += 50)
            cout << expansion.substr(i, 50) << '\n';
        if (remainder) cout << "The last " << expansion.size() - first[remainder]
                            << " digits repeat forever.\n\n";
        else cout << "This expansion terminates.\n\n";
    }
}
