// UVa 10242 - Fourth Point!!
#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<double,double> a,b,c,d;
    while(cin>>a.first>>a.second>>b.first>>b.second>>c.first>>c.second>>d.first>>d.second) {
        if(b==c || b==d) swap(a,b);
        if(a==d) swap(c,d);
        cout << fixed << setprecision(3) << b.first+d.first-a.first << ' '
             << b.second+d.second-a.second << '\n';
    }
}
