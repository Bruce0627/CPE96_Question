// CPE 56021 | UVa 12289 | OneTwo Three
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        string word; cin >> word;
        if (word.size() == 5) { cout << "3\n"; continue; }
        const string one = "one";
        int matches = 0;
        for (int i = 0; i < 3; ++i) matches += word[i] == one[i];
        cout << (matches >= 2 ? 1 : 2) << '\n';
    }
}
