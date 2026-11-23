// UVa 10678 - The Grazing Cow
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        double distance,length; cin>>distance>>length;
        cout << fixed << setprecision(3) << acos(-1.0)*length*sqrt(length*length-distance*distance)/4 << '\n';
    }
}
