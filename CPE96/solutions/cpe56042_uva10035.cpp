// CPE 56042 | UVa 10035 | Primary Arithmetic
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (long long a,b; cin >> a >> b && (a || b); ) {
        int carry = 0, count = 0;
        while (a || b) {
            carry = (a%10 + b%10 + carry >= 10);
            count += carry;
            a /= 10; b /= 10;
        }
        if (!count) cout << "No carry operation.\n";
        else cout << count << (count == 1 ? " carry operation.\n" : " carry operations.\n");
    }
}
