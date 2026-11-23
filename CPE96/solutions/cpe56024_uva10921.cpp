// CPE 56024 | UVa 10921 | Find The Telephone
#include <bits/stdc++.h>

using namespace std;

int main() {
    const string keypad = "22233344455566677778889999";
    for (string line; getline(cin, line); ) {
        for (char &c : line) if (c >= 'A' && c <= 'Z') c = keypad[c - 'A'];
        cout << line << '\n';
    }
}
