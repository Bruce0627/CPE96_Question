// CPE 56013 | UVa 1586 | Molar mass
#include <bits/stdc++.h>

using namespace std;

int main() {
    const map<char, double> weight = {{'C',12.01},{'H',1.008},{'O',16.00},{'N',14.01}};
    int tests; cin >> tests;
    while (tests--) {
        string formula; cin >> formula;
        double total = 0;
        for (size_t i = 0; i < formula.size(); ) {
            char element = formula[i++];
            size_t start = i;
            int count = 0;
            while (i < formula.size() && isdigit(formula[i]))
                count = 10 * count + formula[i++] - '0';
            total += weight.at(element) * (start == i ? 1 : count);
        }
        cout << fixed << setprecision(3) << total << '\n';
    }
}
