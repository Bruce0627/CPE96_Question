// CPE 56061 | UVa 446 | Kibbles n" Bits "n" Bits "n" Bits"
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        int a,b; char op;
        cin >> hex >> a >> op >> b;
        cout << bitset<13>(a) << ' ' << op << ' ' << bitset<13>(b)
             << " = " << (op == '+' ? a+b : a-b) << '\n';
    }
}
