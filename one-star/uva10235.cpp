// UVa 10235 - Simply Emirp
#include <bits/stdc++.h>

using namespace std;

bool prime(int n) {
    if(n<2) return false;
    for(int d=2;d<=n/d;++d) if(n%d==0) return false;
    return true;
}
int main() {
    for(int n;cin>>n;) {
        int reversed=0;
        for(int rest=n;rest;rest/=10) reversed=10*reversed+rest%10;
        cout << n << (prime(n) ? (n!=reversed && prime(reversed) ? " is emirp.\n" : " is prime.\n")
                              : " is not prime.\n");
    }
}
