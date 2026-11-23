// UVa 10229 - Modular Fibonacci
#include <bits/stdc++.h>

using namespace std;

using U = uint64_t;
pair<U,U> fib(U n, U modulus) {
    if (!n) return {0,1%modulus};
    auto [a,b] = fib(n/2,modulus);
    U c = a*((2*b+modulus-a)%modulus)%modulus;
    U d = (a*a+b*b)%modulus;
    return n%2 ? make_pair(d,(c+d)%modulus) : make_pair(c,d);
}
int main() {
    U n; int m;
    while (cin >> n >> m) cout << fib(n,U(1)<<m).first << '\n';
}
