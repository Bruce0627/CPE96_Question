// UVa 10162 - Last Digit
#include <bits/stdc++.h>

using namespace std;

int main() {
    int prefix[101]{};
    for (int i = 1; i <= 100; ++i) {
        int last = 1;
        for (int j = 0; j < i; ++j) last = last*i%10;
        prefix[i] = (prefix[i-1]+last)%10;
    }
    for (string n; cin >> n && n != "0";)
        cout << prefix[stoi(n.substr(n.size() > 2 ? n.size()-2 : 0))] << '\n';
}
