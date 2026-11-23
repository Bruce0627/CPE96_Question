// UVa 10209 - Is This Integration?
#include <bits/stdc++.h>

using namespace std;

int main() {
    const double pi = acos(-1.0);
    for (double a; cin >> a;) {
        double first = (1-sqrt(3.0)+pi/3)*a*a;
        double second = (2*sqrt(3.0)-4+pi/3)*a*a;
        cout << fixed << setprecision(3) << first << ' ' << second << ' '
             << a*a-first-second << '\n';
    }
}
