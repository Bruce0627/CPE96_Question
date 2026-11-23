// CPE 56114 | UVa 10098 | Generating Fast
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        string word; cin >> word;
        sort(word.begin(), word.end());
        do { cout << word << '\n'; }
        while (next_permutation(word.begin(), word.end()));
        cout << '\n';
    }
}
