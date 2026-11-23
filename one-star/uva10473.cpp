// UVa 10473 - Simple Base Conversion
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (string value; cin >> value && value.front()!='-';) {
        if (value.size()>1 && tolower(value[1])=='x') cout << dec << stoull(value,nullptr,16) << '\n';
        else cout << "0x" << uppercase << hex << stoull(value) << '\n';
    }
}
