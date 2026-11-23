// UVa 10260 - Soundex
#include <bits/stdc++.h>

using namespace std;

int main() {
    const string code = "01230120022455012623010202";
    for (string word; cin >> word;) {
        char previous = '0';
        for (char c : word) {
            char digit = code[c-'A'];
            if (digit != '0' && digit != previous) cout << digit;
            previous = digit;
        }
        cout << '\n';
    }
}
