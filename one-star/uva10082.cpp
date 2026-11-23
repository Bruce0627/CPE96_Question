// UVa 10082 - WERTYU
#include <bits/stdc++.h>

using namespace std;

int main() {
    string keys = string(1, char(96)) + "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    for (char c; cin.get(c);) {
        size_t i = keys.find(c);
        cout << (i != string::npos && i > 0 ? keys[i-1] : c);
    }
}
