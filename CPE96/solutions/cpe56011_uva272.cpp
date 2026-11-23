// CPE 56011 | UVa 272 | TEX Quotes
#include <bits/stdc++.h>

using namespace std;

int main() {
    bool opening = true;
    for (char c; cin.get(c); ) {
        if (c != '"') cout << c;
        else {
            cout << (opening ? string(2, char(96)) : "''");
            opening = !opening;
        }
    }
}
