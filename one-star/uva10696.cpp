// UVa 10696 - f91
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int n; cin>>n && n;)
        cout << "f91(" << n << ") = " << (n<=100?91:n-10) << '\n';
}
