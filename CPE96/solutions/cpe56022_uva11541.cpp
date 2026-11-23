// CPE 56022 | UVa 11541 | Decoding
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    for (int tc = 1; tc <= tests; ++tc) {
        string encoded; cin >> encoded;
        cout << "Case " << tc << ": ";
        for (size_t i = 0; i < encoded.size(); ) {
            char letter = encoded[i++];
            int count = 0;
            while (i < encoded.size() && isdigit(encoded[i]))
                count = 10 * count + encoded[i++] - '0';
            cout << string(count, letter);
        }
        cout << '\n';
    }
}
