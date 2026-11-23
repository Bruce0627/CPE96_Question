// UVa 10714 - Ants
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int length,n,earliest=0,latest=0; cin>>length>>n;
        while (n--) {
            int x; cin>>x;
            earliest=max(earliest,min(x,length-x));
            latest=max(latest,max(x,length-x));
        }
        cout << earliest << ' ' << latest << '\n';
    }
}
