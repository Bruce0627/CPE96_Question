// UVa 11344 - The Huge One
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        string number; int count; cin>>number>>count;
        bool valid=true;
        while (count--) {
            long long divisor; cin>>divisor;
            long long remainder=0;
            for (char c : number) remainder=(10*remainder+c-'0')%divisor;
            valid &= remainder==0;
        }
        cout << number << " - " << (valid?"Wonderful.":"Simple.") << '\n';
    }
}
