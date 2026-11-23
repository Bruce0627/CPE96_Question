// UVa 10931 - Parity
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long n;cin>>n && n;) {
        string digits;
        for (;n;n/=2) digits+=char('0'+n%2);
        reverse(digits.begin(),digits.end());
        cout << "The parity of " << digits << " is " << count(digits.begin(),digits.end(),'1') << " (mod 2).\n";
    }
}
