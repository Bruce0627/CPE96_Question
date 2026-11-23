// UVa 10573 - Geometry Paradox
#include <bits/stdc++.h>

using namespace std;

int main() {
    const double pi=acos(-1.0);
    int t; cin>>t;
    string line; getline(cin,line);
    while (t-- && getline(cin,line)) {
        istringstream input(line);
        double a,b; input>>a;
        cout << fixed << setprecision(4) << (input>>b ? 2*pi*a*b : pi*a*a/8) << '\n';
    }
}
