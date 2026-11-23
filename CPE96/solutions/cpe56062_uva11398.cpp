// CPE 56062 | UVa 11398 | The Base-1 Number System
#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long value = 0;
    int bit = 0;
    for (string token; cin >> token && token != "~"; ) {
        if (token == "#") { cout << value << '\n'; value = 0; bit = 0; }
        else if (token.size() <= 2) bit = token.size() == 1;
        else for (size_t i = 2; i < token.size(); ++i) value = 2*value + bit;
    }
}
