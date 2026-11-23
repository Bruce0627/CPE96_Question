// UVa 10310 - Dog and Gopher
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; double gx,gy,dx,dy;
    while (cin >> n >> gx >> gy >> dx >> dy) {
        bool escaped=false;
        for (int i=0; i<n; ++i) {
            double x,y; cin >> x >> y;
            double g=(x-gx)*(x-gx)+(y-gy)*(y-gy), d=(x-dx)*(x-dx)+(y-dy)*(y-dy);
            if (!escaped && d>=4*g) {
                cout << fixed << setprecision(3) << "The gopher can escape through the hole at (" << x << ',' << y << ").\n";
                escaped=true;
            }
        }
        if (!escaped) cout << "The gopher cannot escape.\n";
    }
}
