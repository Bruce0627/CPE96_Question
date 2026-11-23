// UVa 11689 - Soda Surpler
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin>>t;
    while(t--) {
        int e,f,c;cin>>e>>f>>c;
        int bottles=e+f, drank=0;
        while(bottles>=c) {
            int exchanged=bottles/c;
            drank+=exchanged;
            bottles=exchanged+bottles%c;
        }
        cout << drank << '\n';
    }
}
