// UVa 10215 - The Largest/Smallest Box
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (double a,b; cin >> a >> b;) {
        double cut = (a+b-sqrt(a*a-a*b+b*b))/6;
        cout << fixed << setprecision(3) << cut << ' ' << 0.0 << ' ' << min(a,b)/2 << '\n';
    }
}
